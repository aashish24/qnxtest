cmake_minimum_required(VERSION 2.8.10.2)

project (test_gl_app)

set(CTC_LIB_GUI_APP_SRCS
  test1.cpp)
set(deps11 gf kiwi)

find_package(ves REQUIRED)
find_package(VTK REQUIRED)

# Fixes for the cmake bug
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMake/")
include(${CMAKE_SOURCE_DIR}/CMake/cmake_patch.cmake)

#add_library(guitest123 STATIC ${CTC_LIB_GUI_APP_SRCS} )
add_executable( guitest123 ${CTC_LIB_GUI_APP_SRCS}  )
target_link_libraries(guitest123  ${deps11})
