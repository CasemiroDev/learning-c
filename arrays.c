#include <stdio.h>

// this class we will learn about arrays in C
// arrays are a collection of similar data types
// arrays are used to store multiple values in a single variable

// to crate an array in C, we need to specify the data type and the size of the array
// the size of the array is the number of elements it can hold
// the size of the array is fixed and cannot be changed after it is created
// the size of the array is specified in square brackets [] after the data type

int main() {

    int myNumbers[] = {1, 2, 3, 4, 5}; // array of integers
    int myNumbers2[5]; // array of integers with size 5
    // the first array is initialized with values, the second array is not initialized
    // the first array have no limit on the size, the second array have a limit of 5 elements

    //to call one element of the array, we use the index of the element
    printf("The first element of the array is: %d\n", myNumbers[0]); // prints 1
    printf("The second element of the array is: %d\n", myNumbers[1]); // prints 2


    

 return 0
}