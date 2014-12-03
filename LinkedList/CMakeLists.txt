cmake_minimum_required(VERSION 2.8)
# Create a library called "Hello" which includes the source file "hello.cxx".
# The extension is already found. Any number of sources could be listed here.
add_library (likedlist LinkedList.cpp)

# Make sure the compiler can find include files for our Hello library
# when other libraries or executables link to Hello
#target_include_directories (linkedlist PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

