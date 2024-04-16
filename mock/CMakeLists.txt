add_library(time_mock time_mock.cpp)

# We want that all libraries that link with this one could see time_mock.hpp
target_include_directories(time_mock PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(time_mock PUBLIC gmock_main)