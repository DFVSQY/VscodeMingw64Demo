# VscodeMingw64Demo

This is a demo that shows how to use the vscode to develop C/C++ with gcc compiler and gdb debugger on windows. This demo uses mingw64
</br>
</br>
## 简单的说明一下：
使用vscode搭建C/C++开发环境进行一些小型demo的测试还是很方便的，前段时间给出了一个[vscode+msvc的环境搭建Demo](https://github.com/DFVSQY/VscodeMsvcDemo)。本次将vscode+mingw64的搭建Demo也分享一份，若有需要的网友可自行参考学习。关于mingw64的下载和安装官网有说明，本Demo使用的mingw64是使用[msys2](http://www.msys2.org/)安装的，msys2提供了在windows上的类linux开发环境，而且还集成了pacman包管理，使用非常方便。由于众所周知的原因国内下载及使用msys2可能会网络不畅，推荐使用[中科大镜像网站](https://mirrors.ustc.edu.cn/)更新挺及时的。下载（"x86_64" for 64-bit, "i686" for 32-bit Windows）完毕后根据[中科大msys2帮助说明](https://lug.ustc.edu.cn/wiki/mirrors/help/msys2)修改相关文件即可。修改完毕后根据msys2的官方说明先进行更新，更新完毕之后再进行安装mingw64。

### 1. 查询gcc相关软件包

运行msys2.exe,使用pacman搜索功能先查找mingw64相关的软件包,输入下面的命令：
~~~
pacman -Ss mingw-w64 gcc
~~~
### 2. 安装gcc
32位输入下面的命令：
~~~
pacman -S mingw-w64-i686-gcc
~~~
64位输入下面的命令：
~~~
pacman -S mingw-w64-x86_64-gcc
~~~
### 3. 查询gdb相关软件包
等待安装完毕后，然后安装gdb调试器，输入下面的命令先查询相关安装包：
~~~
pacman -Ss mingw-w64 gdb
~~~
### 4. 安装gdb
32位输入下面的命令：
~~~
pacman -S mingw-w64-i686-gdb
~~~
64位输入下面的命令：
~~~
pacman -S mingw-w64-x86_64-gdb
~~~
### 5. 添加环境变量
gdb调试器安装完毕后，将下载对应的mingw32或者mingw64文件夹下的bin目录添加到环境变量中。
<br/>
<br/>
<br/>
<br/>
## 工程的使用
### 1. 如何构建exe二进制文件：
~~~
运行 Run Build Task 命令或者使用快捷键 Ctrl+Shift+B 即可
~~~
### 2. 如何运行构建的二进制文件:
~~~
运行 Run Test Task 命令即可
~~~
### 3. 如何调试编写的程序
~~~
在源文件中设置上断点，按下F5即可
