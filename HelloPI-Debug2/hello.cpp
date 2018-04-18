#include <stdio.h>
#include <unistd.h>

void wait(int times) {
    int i;
    for (i = 0; i < times; ++i) {
        usleep(200*1000);
    }
}

int main(int argc, char** argv) {
    puts("Hello PI!");
    wait(5);
    puts("This is my first program on a raspberry pi...");
    puts("<Press any key>");
    getchar();
}
