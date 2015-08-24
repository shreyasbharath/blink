# blink
A lightning fast build system for projects based on C/C++

Blink is a meta-build system for C/C++ projects based on CMake and Ninja.

The main focus of Blink is as below -
  - Make builds as fast as possible
  - Support TDD workflow
  - Automate the boring stuff

To run, navigate to root of project and run the below command -
cmake -Bbuild -H. -G "Ninja" && ninja -C build all -v
