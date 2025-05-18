#include <stdio.h>
//for use bool you need to include this library
#include <stdbool.h>

int main() {

    //bool data type, or booleans
    //represent values that are either true or false
    bool yes = true;
    bool no = false;
    printf("%d\n", yes);
    printf("%d\n", no);
    // 1 for yes and 0 for false

    printf("%d\n", yes == no);
    // 0, because is false

    printf("%d\n", 1000 > 1);
    // 1, because is true

    int x = 5;
    int y = 4;
    printf("%d\n", x < y);
    // 0, because is false

    printf("%d\n", x == 5);
    // 1, because is true


    return 0;
}