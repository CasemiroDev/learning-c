#include <stdio.h>

int main() {

    // in c we does not have a string data type and we can use char array to create a string

    char greeting[] = "Hello, World!";
    printf("%s\n", greeting);

    // the "%s" format specifier is used to print strings
    // to call an specific character in the string we can use the index of the character

    printf("%c\n", greeting[4]);

    // we use the "%c" format specifier to print a character
    // the same idea is for change anyone character in the string

    greeting[4] = 'X';
    printf("%s\n", greeting);

    // for loop in a string

    for (int i = 0; i < 13; i++) {
        printf("%c\n", greeting[i]);
    }
    
    // if we don't know the length of the string we can use the sizeof function

    int length = sizeof(greeting) / sizeof(greeting[0]);
    int i;
    for (i = 0; i < length; i++) {
        printf("%c\n", greeting[i]);
    }

    // other way to creat an string

    char greeting2[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s\n", greeting2);

    // the '\0' is used to indicate the end of the string in this method
    
    // Special charcharacters
    char txt[] = "We are the so-called \"Vikings\" from the north.";
    printf("%s\n", txt);

    // We can use too \' and \\ to print a single quote and a backslash
    // Has too \n to broke the line
    // \t to insert a tab into a string
    // \0 to indicate the end of the string or null character
    
    return 0;
}