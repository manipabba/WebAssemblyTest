#include <stdio.h>

// can see here: http://localhost:8080/hello.html
// compile: emcc hello.c -o hello.html --emrun
// host and run: emrun --no_browser --port 8080 .
int main() {
    printf("Hello World!\n");
    return 0;
}