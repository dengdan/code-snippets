import tensorflow as tf

from model import *


graph = tf.Graph()

with graph.as_default():

    optimizer = tf.train.RMSPropOptimizer(learning_rate)

    trainable_variables = tf.trainable_variables()
    varname_to_var = dict( (v.name, v) for v in trainable_variables )
    keys = sorted(varname_to_var.keys())

    gradients_and_variables = optimizer.compute_gradients(loss, [ varname_to_var[k] for k in keys])

    var_to_grad = dict((var.name, grad) for grad, var in gradients_and_variables)

    name_to_var = dict((var.name, var) for _, var in gradients_and_variables)

    # save the gradients in memory
    var_to_ref_grad = {}
    for k in keys:
        grad = var_to_grad[k]
        print(k, grad.get_shape())
        ref = tf.Variable(tf.zeros_like(grad))
        ref = ref.assign_add(grad)
        var_to_ref_grad[k] = ref

    discounted_values = tf.placeholder(tf.float32, shape=[None, 1], name='discounted_values')

    # control when to apply gradients
    compute_gradients_flag = tf.placeholder(tf.int32, name="compute_gradients")
    def fn1():
        var_grad_list = []
        for k in keys:
            grad = var_to_ref_grad[k]
            var  = varname_to_var[k]
            var_grad_list.append((grad,var))

        optimizer.apply_gradients(var_grad_list)
        return tf.no_op()

    fn2 = lambda : tf.no_op()

    last_op = tf.cond(tf.equal(compute_gradients_flag, 1), fn1, fn2)

with tf.Session(graph=graph) as s:

    feed_dict= {
        state : np.zeros([minibatch, 80, 80, 1]),
        action_indexes: [1],
        compute_gradients_flag: False,
    }

    s.run(tf.initialize_all_variables())

    for i in range(10):

        # accumulate gradients
        s.run(last_op, feed_dict=feed_dict)