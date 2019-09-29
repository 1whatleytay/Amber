add_library(standard STATIC
    include/standard/terminal.h
    include/standard/allocator.h

    terminal.c
    allocator.c)
target_include_directories(standard PUBLIC include)
target_link_libraries(standard PUBLIC kernel)
