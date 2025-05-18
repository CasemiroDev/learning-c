# include <stdio.h>
// class of arithmetic operators
float x = 4;
float y = 4;
int rdone = 4;
int rdtwo = 4;

int main() {
    //Arithmetic Operators

    //addition
    float sum = x + y;
    printf("The addition of 4 and 4 is: \n");
    printf("%.2f\n", sum);

    //subtraction
    float sub = x - y;
    printf("The subtraction of 4 and 4 is: \n");
    printf("%.2f\n", sub);

    //multiplication
    float mult = x * y;
    printf("The multiplication of 4 and 4 is: \n");
    printf("%.2f\n", mult);

    //division
    float div = x / y;
    printf("The division of 4 and 4 is: \n");
    printf("%.2f\n", div);

    //rest of division
    int red = rdone % rdtwo;
    printf("The modulus of 4 and 4 is: \n");
    printf("%d\n", red);

    //pre-increment an pos-increment
    float inc = ++x;
    printf("The increment of 4 is: \n");
    printf("%.2f\n", inc);
    // The pre-increment realizes the equation after the sum with b
    // The post-increment realizes the equation before the sum with b

    //decrement
    float dec = --x;
    printf("The decrement of 4 is: \n");
    printf("%.2f\n", dec);
    // The pre-increment realizes the equation after the sum with b
    // The post-increment realizes the equation before the sum with b

    //Assignment Operators

    // operator "="
    int equal = 222;
    printf("The assignment operator to assign a value to a var is: \'=\' Ex: x = 222:\n");
    printf("%d\n", equal);

    // operator "+="
    int pleq = 0;
    pleq += 1;
    printf("The assignment operator to sum a value to a var is: \'+=\' Ex.: x = 0, x += 1:\n");
    printf("%d\n", pleq);

    // operator "-="
    int meneq = 1;
    meneq -= 1;
    printf("The assignment operator to subtract a value to a var is: \'-=\' Ex.: x = 1, x -= 1:\n");
    printf("%d\n", meneq);

    // operator "*="
    int  muleq = 5;
    muleq *= 4;
    printf("The assignment operator to multiplicate a value to a var is: \'*=\' Ex.: x = 5, x *= 4:\n");
    printf("%d\n", muleq);

    // operator "/="
    int diveq = 4;
    diveq /= 2;
    printf("The assignment operator to divide a value to a var is: \'/=\' Ex.: x = 4, x /= 2:\n");
    printf("%d\n", diveq);

    // operator "%="
    int modeq = 16;
    modeq %= 3;
    printf("The assignment operator to got the modulus(rest of division by other number) of a var is: \'&=\' Ex.: x = 16, x $= 3:\n");
    printf("%d\n", modeq);

    /*
    Other assignment binary operators:
    "&=", "|=", "^=", ">>=" and "<<=".
    */

    //Comparision Operators

    //operator equal to
    int x = 4;
    int y = 4;
    printf("The comparision operator \'==\' of x = 4 and y = 4 is True(1)\n");
    printf("%d\n", x == y);

    //operator not equal
    int val1 = 5;
    int val2 = 6;
    printf("The comparision operator \'!=\' of x = 5 and y = 6 is True(1)\n");
    printf("%d\n", val1 != val2);

    //operator grater than and less than
    printf("The comparision operators \'>\' and \'<\' of x = 5 and y = 6 is respectively False(0) and True (1)\n");
    printf("%d\n", val1 > val2);
    printf("%d\n", val1 < val2);

    //operator greater than or equal to and less than or equal to
    printf("To comparision operators \'>=\' and \'<=\' of x = 4 and y = 4 is respectively True(1) and True(1)\n");
    printf("%d\n", x >= y);
    printf("%d\n", x <= y);

     // Logical Operator

     // operator AND
     
     printf("The logical operator \'&&\' is AND and only if two values are true the response will be true Ex.: x = 4, y = 4, z= 5. x = y && x < z, will return 1 because is true\n");
     printf("%d", x = y && x < val1);

     // operator OR
     printf("The logical operator \'||\' is OR, and only if one of the values is true the response will be true Ex.: x = 4, y= 4, z = 5. x > y || x = y, will return 1 because is true\n");
     printf("%d", x > y || (x = y));

     //Operator NOT
     printf("Thoe logical operator \'!\' is NOT, and only will return the opposite of the result Ex.: x = 4, y = 4 Ex.: x > y, will return 1 because is the opposite of False(0)\n");
    printf("%d", !(x > y));
    return 0;
}