#encoding=utf-8
'''
Created on 2017-07-27

@author: dengdan
'''
# https://www.tensorflow.org/versions/r0.12/api_docs/python/image/flipping_rotating_and_transposing

k = 1
xy = (90, 20)

import util
import tensorflow as tf
image_path = '~/Pictures/img_2.png'
image_data = util.img.imread(image_path, rgb = True)
image_data = util.img.resize(image_data, size = (200, 100))
h, w = image_data.shape[0:2]
util.img.circle(image_data, center = xy, r = 2, 
                color = util.img.COLOR_GREEN, border_width = 1)

image = tf.placeholder(dtype = tf.uint8)

# rotated_image = tf.image.transpose_image(image)
# rotated_image = tf.image.flip_left_right(image)
# rotated_image = tf.image.flip_up_down(image)
rotated_image = tf.image.rot90(image, k = k)

with tf.Session() as sess:
    I = sess.run([rotated_image], feed_dict = {image: image_data})[0]
    xy = util.img.rotate_point_by_90(xy, k, w = w, h = h)
    util.img.circle(I, center = xy, r = 3, 
                color = util.img.COLOR_RGB_RED, border_width = 1)

    util.plt.show_images([image_data, I])
    