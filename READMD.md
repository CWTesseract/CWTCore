# CWTCore
##### **WARNING: ** This project is not yet ready for public usage, and the entire API is subject to change without notice (including, but not limited to, class and member variable names). Use at your own risk.

A binary-compatible C++ class mapping for Cube World version **0.9.1-5** for use in mod development. 

## Usage
For MSVC-STL binary compatibility with the existing Cube World classes, we require a compiler that will link the MSVC STL implementation. This project has settled on strictly requiring Clang/LLVM via Visual Studio 2019. 

1. Setup Clang/LLVM with Visual Studio 2019 according to [this article](https://devblogs.microsoft.com/cppblog/clang-llvm-support-in-visual-studio/).
2. Create a new folder for your mod.
`$ mkdir MyMod`
`$ cd MyMod`
3. Add this repo as a git submodule (or clone it, but submodule is preferred).
`$ git submodule add https://github.com/CWTesseract/CWTCore`
4. Create a `CMakeLists.txt` to build and link CWTCore.
```
	cmake_minimum_required (VERSION 3.8)
	project(MyMod)

	// Add the CWTCore subdirectory for CMake to build.
	add_subdirectory(CWTCore)

	add_library (MyModDLL SHARED "main.cpp")

	// Link and include CWTCore.
	target_link_libraries (MyModDLL LINK_PUBLIC CWTCore)
	target_include_directories (MyModDLL PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/CWTCore/include)
```
5.  Use any of the classes int the `CWT` namespace.



## FAQ
- Where is the documentation?
  - There is **none**.