add_library(data_structures
        libs/data_structures/vector/vector.c libs/data_structures/vector/vector.h libs/data_structures/string/string_.c libs/data_structures/string/string_.h
        )

add_subdirectory(string)
target_link_libraries(data_structures)
