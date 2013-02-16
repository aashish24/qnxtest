#list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMake/")
#include(${CMAKE_SOURCE_DIR}/CMake/cmake_patch.cmake)
project (test_gl_app)


set(CTC_LIB_GUI_APP_SRCS
  test1.cpp)
set(deps11 gf  kiwi)

find_package(ves REQUIRED)

find_package(VTK REQUIRED)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMake/")
include(${CMAKE_SOURCE_DIR}/CMake/cmake_patch.cmake)


add_library(guitest123 STATIC ${CTC_LIB_GUI_APP_SRCS} )
#add_executable( guitest123 ${CTC_LIB_GUI_APP_SRCS}  )
target_link_libraries(guitest123  ${deps11})
