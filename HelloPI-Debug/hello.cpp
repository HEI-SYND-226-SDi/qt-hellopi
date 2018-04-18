#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv) {
    puts("Hello PI!");
	
	int i;
	for (i = 0; i < 5; ++i) {
		usleep(200*1000);
    }
    puts("This is my first program on a raspberry pi...");
    puts("<Press any key>");
    getchar();
}