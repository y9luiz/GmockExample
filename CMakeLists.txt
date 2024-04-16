cmake_minimum_required(VERSION  3.22)
project(gmock_example)

set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_subdirectory(production_code)

add_subdirectory(mock)

add_subdirectory(test)
