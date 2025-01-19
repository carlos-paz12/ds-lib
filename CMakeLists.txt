cmake_minimum_required(VERSION 3.28)
project (DataStructures VERSION 1.0.0 LANGUAGES CXX )

#=== CREATING COMPILING DATABASE ===#
# O comando set(CMAKE_EXPORT_COMPILE_COMMANDS 1) no CMake gera um arquivo
# compile_commands.json, que ajuda ferramentas externas a entenderem o processo
# de compilação do projeto.
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

#=== ADDING SUBDIRECTORIES ===#
set( TEST_LIB "tm" )
add_subdirectory(tests/tm) # This will ask this lib to be build

set ( TEST_DRIVER "run_tests")
add_subdirectory(tests)    # This will ask the tests to be generated
