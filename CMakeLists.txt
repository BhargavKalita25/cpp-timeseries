cmake_minimum_required(VERSION 3.14)
project(cpp_dsa_starter LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Header-only library target
add_library(dsa INTERFACE)
target_include_directories(dsa INTERFACE include)

# Demo executable (optional)
add_executable(dsa_demo src/main.cpp)
target_link_libraries(dsa_demo PRIVATE dsa)

enable_testing()

add_executable(test_sort tests/test_sort.cpp)
target_link_libraries(test_sort PRIVATE dsa)
add_test(NAME test_sort COMMAND test_sort)

add_executable(test_dsu tests/test_dsu.cpp)
target_link_libraries(test_dsu PRIVATE dsa)
add_test(NAME test_dsu COMMAND test_dsu)

add_executable(test_bfs tests/test_bfs.cpp)
target_link_libraries(test_bfs PRIVATE dsa)
add_test(NAME test_bfs COMMAND test_bfs)