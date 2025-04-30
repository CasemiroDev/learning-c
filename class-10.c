# include <stdio.h>
// class of arithmetic operators
float x = 4;
float y = 4;
int rdone = 4;
int rdtwo = 4;

int main() {
    //Addition
    float sum = x + y;
    printf("The addition of 4 and 4 is: ");
    printf("%.2f\n", sum);

    //Subtraction
    float sub = x - y;
    printf("The addition of 4 and 4 is: ");
    printf("%.2f\n", sub);

    //Multiplication
    float mult = x * y;
    printf("The multiplication of 4 and 4 is: ");
    printf("%.2f\n", mult);

    //Division
    float div = x / y;
    printf("The division of 4 and 4 is: ");
    printf("%.2f\n", div);

    //Rest of Division
    int red = rdone % rdtwo;
    printf("The modulus of 4 and 4 is: ");
    printf("%d\n", red);

    //Increment
    float inc = ++x;
    printf("The increment of 4 is: ");
    printf("%.2f\n", inc);

    //Decrement
    float dec = --x;
    printf("The decrement of 4 is: ");
    printf("%.2f\n", dec);

    /*Assignment operators
    '=' assignmet operator to assign a value to a variable;
    '+=' addition assignment to addition a value to a variable;
    
    */
    return 0;
}