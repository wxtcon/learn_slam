cmake_minimum_required(VERSION 3.0.0)
project(study VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(study main.cpp)
# add_executable(hello main.cpp)
# add_library(hello_ libHelloSLAM.cpp)
add_library(hello_shared SHARED libHelloSLAM.cpp)

target_link_libraries(study hello_shared)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

# find_package(OpenGL REQUIRED)
# include_directories(${OPENGL_INCLUDE_DIRS})
# target_link_libraries(study ${OPENGL_LIBRARIES})
 
# find_package(GLEW REQUIRED)
# include_directories(${GLEW_INCLUDE_DIRS})
# target_link_libraries(study ${GLEW_LIBRARIES})
 
find_package(Pangolin REQUIRED)
include_directories(${Pangolin_INCLUDE_DIRS})
target_link_libraries(study ${Pangolin_LIBRARIES})


