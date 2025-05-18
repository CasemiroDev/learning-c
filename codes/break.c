#include <stdio.h>
#include <stdlib.h>

//on this code we will learn aboute break statement in c
int main() {
    int i = 0;
    while (i < 10) {
        if (i == 5) {
            break; // exit the loop when i is 5
        }
        printf("%d\n", i);
        i++;
    }
    printf("Loop exited at i = %d\n", i);
    return 0;
}