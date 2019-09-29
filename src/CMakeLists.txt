add_subdirectory(kernel)
add_subdirectory(standard)

add_executable(amber.bin boot.asm main.c)
target_link_libraries(amber.bin PUBLIC kernel standard)

add_custom_target(amber.iso
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/amber
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/amber/boot
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/amber/boot/grub
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/grub.cfg ${CMAKE_BINARY_DIR}/amber/boot/grub/
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_BINARY_DIR}/amber.bin ${CMAKE_BINARY_DIR}/amber/boot/
    COMMAND i386-elf-grub-mkrescue -o ${CMAKE_BINARY_DIR}/amber.iso ${CMAKE_BINARY_DIR}/amber
    DEPENDS amber.bin)
