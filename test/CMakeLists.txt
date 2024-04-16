add_executable(test_time test_time.cpp)

message("LUIZO")

target_link_libraries(test_time PRIVATE time_mock production_lib)

add_test(NAME that-test-I-made COMMAND test_time)
