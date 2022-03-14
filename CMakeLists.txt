cmake_minimum_required(VERSION 3.21)
project(untitled1 C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled1 main.c "libs/data_structures/string/ tasks/removeNonLetters.c" "libs/data_structures/string/ tasks/removeNonLetters.h" "libs/data_structures/string/ tasks/replace.c" "libs/data_structures/string/ tasks/replace.h" "libs/data_structures/string/ tasks/printWordsRevers.c" "libs/data_structures/string/ tasks/printWordsRevers.h")
#libs/data_structures/vector/vecrot.c libs/data_structures/vector/vector.h libs/data_structures/string/string_.c libs/data_structures/string/string_.h
add_subdirectory(libs)

target_link_libraries (untitled1 string)
target_link_libraries(untitled1 data_structures)

