cmake_minimum_required(VERSION 3.3)
project(Corewar)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror -Wextra")
set(SOURCE_FILES src/main.c src/error.c src/pmalloc.c src/convert.c libft/match.c)

add_executable(Corewar ${SOURCE_FILES})

include_directories(libft/)
include_directories(include/)