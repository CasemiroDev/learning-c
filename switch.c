#include <stdio.h>
#include <stdbool.h>

int main() {

    // Switch Statement
    int x = 2;
    switch (x)

    //expression want to be a const int for the cases

    {

    case 1:
        printf("First Case");
    break;

    //break to stop repetition

    case 2:
        printf("Second Case");
    break;
    
    default:
    //if no one of the cases will be able, uses the default.
        break;
    }

    return 0;
}