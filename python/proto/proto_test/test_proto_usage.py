# import 
from protos import proto_test_pb2

# create
proto_test = proto_test_pb2.ProtoTest()

# set property
proto_test.num = 10000
# import pdb
# pdb.set_trace()


# load from text file
from google.protobuf import text_format
import os
config_path = os.path.dirname(os.path.realpath(__file__)) + "/proto_test.pb.txt" 
with open(config_path, 'r') as f:
    text_format.Merge(f.read(), proto_test)
print(proto_test)
