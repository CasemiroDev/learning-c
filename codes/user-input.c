#include <stdio.h>
#include <string.h>

int main() {
    
    // When a user want to input a string, we can use the scanf function

    int myNum;

    printf("What's your favorite number?\n");
    scanf("%d", &myNum);
    printf("Your favorite number is: %d\n", myNum);

    // The scanf function needs the % fomat specifier to know the type of data we are working with
    // The & operator is used to get the address of the variable in the memory

    // Multiple Inputs
    int x, y, z;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Sum: %d\n", x + y + z);

    // To use the scanf funtion for input a lot of variables we can use the %d format specifier for all the variables

    char name[30];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s\n", name);

    // Working with strings we dont need to use the & operator, because the name variable is already a pointer to the first character of the string
    // The scanf function will stop reading the string when it finds a space, so we can use the fgets function to read a string with spaces

    char name2[30];
    printf("Enter your full name: ");
    fgets(name2, sizeof(name2), stdin);
    printf("Hello, %s\n", name2);

    // The fgets function will read the string until it finds a newline character or the end of the file
    // stdin is the standard input stream, which is usually the keyboard
    
    return 0;
}