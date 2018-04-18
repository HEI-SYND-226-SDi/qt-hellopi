# HelloPI example

Hello World application using Qt on Raspberry PI build by cmake and ninja.


## Install dependencies

        # sudo apt update
        # sudo apt install git nano vim neovim cmake cmake-curses-gui ninja-build g++ gdb qt5-default qtconnectivity5-dev


## Clone repository

        # git clone https://github.com/HEI-SYND-226-SDi/qt-hellopi.git
    
    
## Compile and run first program: Hello PI

        # cd HelloPI
        # mkdir Release
        # cd Release
        # cmake -G Ninia -DCMAKE_BUILD_TYPE=Release ..
        # ninja
        # ./HelloPI


## Compile and debug part 1

        # cd HelloPI-Debug
        # mkdir Debug
        # cd Debug
        # cmake -G Ninia -DCMAKE_BUILD_TYPE=Debug ..
        # ninja
        # gdb ./HelloPI
    
    
## Compile and debug part 2    

        # cd HelloPI-Debug2
        # mkdir Debug
        # cd Debug
        # cmake -G Ninia -DCMAKE_BUILD_TYPE=Debug ..
        # ninja
        # gdb ./HelloPI