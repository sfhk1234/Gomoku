include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

file(GLOB tests_src "${CMAKE_SOURCE_DIR}/tests/*.cpp")
add_executable(run_tests ${tests_src})
target_include_directories(
  run_tests 
  PUBLIC 
  ${CMAKE_SOURCE_DIR}/includes 
  ${CMAKE_SOURCE_DIR}/tests
  )

target_link_libraries(
  run_tests 
  PUBLIC
  gomoku_lib
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(run_tests)
