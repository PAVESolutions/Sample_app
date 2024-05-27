 
# Sample App (C++)

Simple App to demonstrate usage of prizmGL.so library. It is a Visual Studio Code project file.

## Description

It is a sample app using OpenCV Videocapture for capturing from camera device and demonstrating the usage of prizmGL dynamic lib in app. 


## Getting Started

### Dependencies

Development environment Setup
* Ubuntu 20.04 Arm 64bits
* IDE is Visual Studio Code (Linux) Version: 1.85.2
* g++ 11.4.0 and above should work
* cmake version 3.16.3 and above

Libraries
* OpenCV version 4.x.x build for arm64 platform should work (OpenCV V4.3.0 was used to build this project)
    * Install from OpenCV from Ubuntu reposiories  
    OR
    * Install OpenCV from source
* OpenGL core profile version 3.3 and above
* glfw
Below libraries needed:  
libglfw3-dev 3.3.2-1 arm64  
libglfw3 3.3.2-1 arm64  
To install using commands below:
```
sudo apt-get install libglfw3
sudo apt-get install libglfw3-dev
```
* libprizmGL.so library 


### Using prizmGL library in your project files
libprizmGL.so library
1. add prizmGL.h to your project include folder  
2. add libprizmGL.so to your project lib folder
3. Ensure required path to header folder and library folder are setup for compiler and linker
4. If using cmake, you may reference CMakeLists.txt for setup

### Installing

Nothing here

### Executing program

* How to run the program
    * Build and run from Visual Studio Code


## Authors


## Version History

* 0.1.0
    * Initial Release

## Acknowledgments

