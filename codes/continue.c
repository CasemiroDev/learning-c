#include <stdio.h>
#include <stdlib.h>

// in this code we will learn about continue statement in c
int main() {
    int i = 0;
    while (i < 10) {
        i++;
        if (i == 5) {
            continue; // skip the rest of the loop when i is 5
        }
        printf("%d\n", i);
    }
    printf("Loop exited at i = %d\n", i);
    return 0;
}