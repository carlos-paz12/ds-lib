# [1] Setup the executable that will run the tests.
add_executable( ${TEST_DRIVER} main.cpp )

target_compile_options(${TEST_DRIVER} PRIVATE -Wall -pedantic -g)
set_target_properties( ${TEST_DRIVER} PROPERTIES CXX_STANDARD 17 )

# [2] Define where the binary will be output to.
set_target_properties(${TEST_DRIVER} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# [3] Link tests compiled sources with the TestManager lib.
target_link_libraries( ${TEST_DRIVER} PRIVATE ${TEST_LIB} )

# [4] Define where to look for includes
target_include_directories( ${TEST_DRIVER} PRIVATE ${CMAKE_SOURCE_DIR}/include/ )
