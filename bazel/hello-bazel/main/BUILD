cc_library(
    name = "hello",
    srcs = ["hello.cc"],
    hdrs = ["hello.h"], 
)

cc_binary(
    name = "main", 
    srcs = ["main.cc"],
    deps = [
        ":hello", 
        "//lib:hello_lib"
    ], 
)
