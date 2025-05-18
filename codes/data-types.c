/*
Data types:
int | 2 ou 4 bytes | declared as "%d"
float | 4 bytes | declared as "%f"
double | 8 bytes | declared as "lf"
char | 1 byte | declared as "c"
string | infinite bytes | declared as "s"
*/
/*
For char type, can you use the tabel ASCII to display certain characters
For int, you use integers numbers
For float, you use floating numbers
For double, is float but with capacity for more bytes 
*/
// In the declaration of the var you can use "e" for power of 10 Ex.: 35e3 = 35000

#include <stdio.h>

int main() {
    float num = 3.5555555;
    printf("%.2f\n", num);
    // With this you can set the decimal precision you want

    printf("%lu\n", sizeof(num));
    // With this can you see the size in bytes of a var

    int num_int = (int)num;
    printf("%d\n", num_int);
    printf("%d", (int)num);
    // With this can you did the explicit conversion of data type
    return 0;
}