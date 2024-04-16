add_library(production_lib target_code.cpp)

add_executable(production_code main.cpp)

target_link_libraries(production_code production_lib)