add_library(kernel STATIC
    include/kernel/util.h
    include/kernel/kernel.h

    util.c
    kernel.c)
target_link_libraries(kernel PRIVATE standard)
target_include_directories(kernel PUBLIC include)
