#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    // This program demonstrates the use of a while loop in C.
    // It initializes an integer variable i to 0 and uses a while loop to print "Hello, World!" 5 times.
    int i = 0;
    // while (i < 5) will print "Hello, World!" 5 times.

    while (i < 5) {
        printf("Hello, World!\n");
        i++;
    }
    // Now we will learn about do/while loop.
    // The do/while loop will execute the block of code at least once before checking the condition.
    // The following code will print "Hello, World!" 5 times as well.

    i = 0;
    do {
        printf("Hello, World!\n");
        i++;
    } while (i < 5);

    return 0;
}   