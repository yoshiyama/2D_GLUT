cmake_minimum_required(VERSION 3.10)


set(basic 2d_glut)
project(${basic})

# include_directories(/usr/include/eigen3)
add_executable(${basic} ${basic}.cpp)
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )

target_link_libraries(${basic} ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )