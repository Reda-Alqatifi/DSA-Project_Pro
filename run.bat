@echo off
g++ -I . code/main.c++ code/Core/src/*.c++ code/Customer/Menu/*.c++ code/Customer/src/*.c++ code/Employee/Menu/*.c++ code/Employee/src/*.c++ -o main.exe
if %errorlevel% equ 0 (
    echo Compilation Successful! Running program...
    echo ---------------------------------------
    main.exe
) else (
    echo Compilation Failed!
)