cmake_minimum_required (VERSION 3.8)

# Make sure we are building with clang-cl x64 release mode ONLY.
if(NOT CMAKE_CL_64)
   message(FATAL_ERROR "CWTCore REQUIRES clang-cl x64 to build. " )
endif()

if(CMAKE_BUILD_TYPE MATCHES "Debug")
    message(FATAL_ERROR "CWTCore cannot be built debug mode due to MSVC binary compatibility issues." )
endif()

project("CWTCore" VERSION "0.1.0")

add_library (CWTCore
	src/CWTCore.cpp
)

target_include_directories (CWTCore PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
