file(
  GLOB 
  gomoku_src 
  "${CMAKE_SOURCE_DIR}/src/includes/*.h" 
  "${CMAKE_SOURCE_DIR}/src/lib/*.cpp" 
  )

add_executable(main main.cpp ${gomoku_src})
target_include_directories(
  main 
  PUBLIC 
  "${CMAKE_SOURCE_DIR}/src/includes"
  )

add_library(gomoku_lib STATIC ${gomoku_src})
target_include_directories(
  gomoku_lib 
  PUBLIC 
  "${CMAKE_SOURCE_DIR}/src/includes"
  )