#include <stdio.h>
#include <stdbool.h>

int main() {

    if (5>10) {
        printf("the first number is grater than the second");
    }
    //you can use the if condition in C, like this
    // you must define a condition for if

    else if (5<10){
        printf("Now is ok!");
    }
    // More and more conditions for if before the final else

    else {
        printf("the first number is not grater than the second");
    }
    //if the first condition is false, the else will be executed

    //ternary operators | short-hands
    int a = 10, b = 20;
    int maior = (a > b) ? a : b;

    printf("Maior: %d\n", maior); 

    return 0;
}