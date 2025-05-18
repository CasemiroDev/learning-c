#include <stdio.h>

int main() {

    //To create a variable you need to declare the datatype of the variable like "type variableName = value;"
    /*
    Types in C: 
    int, short, long, long long,
    unsigned int, unsigned short, unsigned long,
    float, double, long double,
    char,
    _Bool
    */
    int num = 15;

    // If you print the variable you need to specify the format of the same using "%"
    /*
    d - integer
    f - float
    s - string
    c - char
    */
    printf("%d", num);

    // For print without variables, can you try this
    printf("My favorite number is: %d", 15);
    printf("My favorite letter is: %c", 'D');

    // For change te value of a variable you can directly use the same variable, and give other value or assign the value of one variable to another directly
    num = 16;
    printf("\n%d", num);
    int num2 = 4;
    num = num2;
    printf("\n%d", num);


    // You can declare three variables as same type, with this
    int x = 13, y = 11, z = 9;
    printf("\n%d", x + y + z);

    // Rules for declare a variable
    /*
    can have letters, names and underscores
    can't start with a number
    are case sensitive
    can't has special characters
    can't be reserved words
    
    */
    return 0;
}