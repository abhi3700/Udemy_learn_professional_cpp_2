## Installation [For Linux (Ubuntu)]
### Compiler
1. Open `bash` (ubuntu) terminal at your preferred directory path ("F:\Coding\github_repos\").
1. `$ mkdir magic_enum`
1. `$ cd magic_enum`
1. Clone the repo's sub-folder via svn: `$ svn checkout https://github.com/Neargye/magic_enum/trunk/include`
1. Now, copy the magic_enum folder (with include/ppprint.hpp) into "/usr/local/include/" path.
1. DONE!

> ##### NOTE: Compiler compatibility
>	- Clang/LLVM >= 5
>	- MSVC++ >= 14.11 / Visual Studio >= 2017
>	- Xcode >= 10
>	- GCC >= 9
> So, I used Clang as difficulty faced in installing the required version of gcc.
> syntax: `$ clang++ -std=c++17 test.cpp && ./a.out`


### Enable linting
1. Now, for proper linting, copy & paste the folder (i.e. `magic_enum`) into `mingw-64` directory (in C:\ drive): __"C:\Program Files\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\lib\gcc\x86_64-w64-mingw32\8.1.0\include\c++"__ 
