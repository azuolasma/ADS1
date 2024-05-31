@echo off
rem Check if the script is running on a faculty machine or a personal PC.
if .%USERDOMAIN% == .LINA goto savasPC

echo Setting up environment for MIF computer...
path C:\PROGRA~2\Dev-Cpp\MinGW64\bin\;%path%
mingw32-make.exe
goto toliau

:savasPC
echo Setting up environment for personal PC...
path C:\Program Files\CodeBlocks\MinGW\bin\;%path%
mingw32-make.exe

:toliau
test.exe > test.txt
echo Test results saved to test.txt.
mingw32-make clean
echo Cleanup completed.
pause