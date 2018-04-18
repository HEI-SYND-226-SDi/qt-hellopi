#include <cstdio>
#include <unistd.h>

int main(int argc, char** argv) {
    puts("Hello PI!");
    sleep(1);
    puts("This is my first program on a raspberry pi...");
    puts("<Press any key>");
    getchar();
}