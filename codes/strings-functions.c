#include <stdio.h>
#include <string.h>

int main() {

    // the strlen function is used to get the lenght of a string

    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n", strlen(alphabet));

    // We can use the sizeof function too, but the sizeof include the \0 character, so the result is 27
    // And the sizeof function return the size of the array in bytes

    // To concatenate two strings we can use the strcat function

    char str1[20] = "Hello";
    char str2[] = " World!";

    strcat(str1, str2);
    printf("%s\n", str1);

    // It will concatenate str2 to str1, so the result is "Hello World!"
    // the size of str1 must be greater than the size of str2, otherwise it will cause an error

    // To copy a string in other array we can use the strcpy function

    char str3[20];
    strcpy(str3, str1);
    printf("%s\n", str3);

    // To compare two strings we can use the strcmp function
    


}