cmake_minimum_required(VERSION 3.14)
project(Amber C)
enable_language(ASM_NASM)

set(CMAKE_SYSTEM_NAME "Generic")
set(CMAKE_ASM_NASM_COMPILE_OBJECT "<CMAKE_ASM_NASM_COMPILER> <INCLUDES> \
    <FLAGS> -f elf32 -o <OBJECT> <SOURCE>")
set(CMAKE_C_COMPILER "i386-elf-gcc")
set(CMAKE_C_FLAGS "-std=gnu99 -ffreestanding -O1 -Wall -Wextra")
set(CMAKE_EXE_LINKER_FLAGS "-T ${CMAKE_SOURCE_DIR}/linker.ld -o ${CMAKE_BINARY_DIR}/amber.bin -O1 -nostdlib -ffreestanding")

add_subdirectory(src)
