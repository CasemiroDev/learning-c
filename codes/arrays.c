#include <stdio.h>

// this class we will learn about arrays in C
// arrays are a collection of similar data types
// arrays are used to store multiple values in a single variable

// to crate an array in C, we need to specify the data type and the size of the array
// the size of the array is the number of elements it can hold
// the size of the array is fixed and cannot be changed after it is created
// the size of the array is specified in square brackets [] after the data type

int main() {

    int myNumbers[] = {1, 2, 3, 4, 5}; 

    // array of integers

    int myNumbers2[5]; 

    // array of integers with size 5
    // the first array is initialized with values, the second array is not initialized
    // the first array have no limit on the size, the second array have a limit of 5 elements

    // to call one element of the array, we use the index of the element

    printf("The first element of the array is: %d\n", myNumbers[0]); // prints 1
    printf("The second element of the array is: %d\n", myNumbers[1]); // prints 2

    // to change the value of an element in the array, we use the index of the element

    myNumbers2[2] = 12;
    printf("the changed value of the third element of the array is: %d\n", myNumbers2[2]);

    // prints 12

    printf("the original value of the second element of the array is: %d\n", myNumbers2[1]); 
    
    // prints a binaric value because it is not initialized

    // for loop an array to print all the elements of the array

    printf("The elements of the array are: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", myNumbers[i]);
        
        // prints 1 2 3 4 5
    }

    // in this code i wil explain about switch case c
    // switch case is used to execute one block of code among many blocks of code
    
    switch (myNumbers[0]) 
    
    // the switch case will check the value of the first element of the array

    {
        case 1: 
        
        // if the value is 1, it will execute this block of code
            
        printf("The first element of the array is 1\n");
            break; 
            
            // break statement is used to exit the switch case
            
        case 2: 
        // if the value is 2, it will execute this block of code

            printf("The first element of the array is 2\n");
            break; 
            
            // break statement is used to exit the switch case

        default: 
        
        // if the value is not 1 or 2, it will execute this block of code

            printf("The first element of the array is not 1 or 2\n");
            break; 
            
            // break statement is used to exit the switch case
    }

    printf("The size of the array is: %lu\n", sizeof(myNumbers)/ sizeof(myNumbers[0]));

    // sizeof is used to get the size of the array in bytes

    int lenght = sizeof(myNumbers)/ sizeof(myNumbers[0]);
    for (int i = 0; i < lenght; i++) {
        printf("%d\n", myNumbers[i]);
    }

    // it's a better way to print an array for complete without know the size of the array

    //Now we will talk about multidimensional arrays

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    //to call one element of the multidimensional array, we use the index of the element

    printf("The element in the 3 row and 2 column is: %d\n", matrix[2][1]); 
    
    // prints 8
    // to change the value of an element in the multidimensional array, we use the index of the element

    matrix[1][1] = 12;
    printf("The changed value of the element in the 2 row and 2 column is: %d\n", matrix[1][1]);

    // prints 12
    // for loop an multidimensional array to print all the elements of the array

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

 return 0;
}