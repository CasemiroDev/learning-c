#include <stdio.h>

int main() {

    //now we will learn aboute the for loop
    //for loop is used to repeat a block of code a certain number of times
    //the syntax of the for loop is as follows:
    //for(initialization; condition; increment/decrement) {
    //    //code to be executed
    //}
    
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Hello World\n");
    }
    
    // now we will learn about nested for loops
    //nested for loops are used to repeat a block of code a certain number of times inside another for loop
    //the syntax of the nested for loop is as follows:
    //for(initialization; condition; increment/decrement) {
    //    for(initialization; condition; increment/decrement) {
    //        //code to be executed
    //    }
    //}
    
    int num1, num2;
    for (num1 = 0; num1 < 2; num1++)
    {
        for (num2 = 0; num2 < 5; num2++)
        {
            printf("Hello World\n");
        }
    }
    return 0;
}