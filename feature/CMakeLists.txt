ADD_DEFINITIONS(-DTHIS_SOURCE_DIR="${CMAKE_CURRENT_SOURCE_DIR}")

file(
	GLOB_RECURSE
	feature_files_header
	*.hpp
)
file(
	GLOB_RECURSE
	feature_files_cpp
	*.cpp
)
# Create a library called “Open_DL_METU_feature” which includes the source file “feature.cxx".
# The extension is already found. Any number of sources could be listed here.
#add_library (Open_DL_METU_feature feature.cpp feature.hpp)
ADD_LIBRARY(Open_DL_METU_feature ${feature_files_header} ${feature_files_cpp})


SET_PROPERTY(TARGET Open_DL_METU_feature PROPERTY FOLDER Open_DL_METU/Open_DL_METU)
INSTALL(TARGETS Open_DL_METU_feature DESTINATION lib EXPORT Open_DL_METU-targets)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(/usr/local/include/eigen3)

MESSAGE(“feature-keypoint folder \n”)
MESSAGE(${Open_DL_METU_INCLUDE_DIRS})


include_directories(SYSTEM ${Open_DL_METU_INCLUDE_DIRS})




# Make sure the compiler can find include files for our calibration library
# when other libraries or executables link to calibration
#target_include_directories (Open_DL_METU_feature PUBLIC ${Open_DL_METU_INCLUDE_DIRS})
#include_directories (${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(Open_DL_METU_feature ${OpenCV_LIBS})



