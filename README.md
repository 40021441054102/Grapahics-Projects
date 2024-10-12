## Grapahics Projects
Computer Graphics Class Homeworks and Exercises
* Teacher : Dr. Babak Karasfi
* Student : Ramtin Kosari

### Abstract
This repository contains a collection of graphical project implementations using the OpenGL library in C++. Each class session, my teacher defines a new project for us to work on. Below is a list of the projects completed so far:

### Projects
- [x] [Screen Saver](https://github.com/40021441054102/GP1) (Work with Lines)

### Install and Running Projects
## Prerequisites
⚠️ All these projects have been developed for linux operating system, MacOS and Android ([Termux](https://github.com/termux)) support will be added but i wont work for windows support

Make sure you have the following installed :
* C++ Compiler
* OpenGL
* Glew
* SDL2

## Installation
Open terminal and run :
```bash
git clone https://github.com/40021441054102/Graphics-Projects.git
cd Graphics-Projects
git submodule update --init --recursive
```

Clone my [Automatic C++ Project Builder (RKACPB)](https://github.com/RamtinKosari/RKACPB) and run :
```bash
git clone https://github.com/RamtinKosari/RKACPB.git
cd RKACPB
./build.sh --packages "OpenGL;GLEW;SDL2"
```
Then the Project will be compiled, now you need to find ```build``` directory in previous path and execute this to run project :
```bash
cd ./build/
./run
```
