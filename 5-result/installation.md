## Installation [For Linux (Ubuntu)]
### Compiler
1. Open `bash` (ubuntu) terminal at your preferred directory path ("F:\Coding\github_repos\").
1. `$ mkdir result`
1. `$ cd result`
1. `$ mkdir include`
1. `$ cp result/result.hpp include`
1. `$ rm -rf result`
1. Clone the repo's sub-folder via svn: `$ svn checkout https://github.com/p-ranav/result/trunk/include/result`
1. Now, copy the result folder (with include/result.hpp) into "/usr/local/include/" path.
1. DONE!

### Enable linting
1. Now, for proper linting, copy & paste the folder (i.e. `result`) into `mingw-64` directory (in C:\ drive): __"C:\Program Files\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\lib\gcc\x86_64-w64-mingw32\8.1.0\include\c++"__ 
