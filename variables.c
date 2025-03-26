/* Variables are containers for storing data values. Like numbers and characters. In C, there are different types of variables (defined with different keywords), for example:
int - stores integers (whole numbers), without decimals, such as 123 or -123
float - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
*/

#include <stdio.h>

// int main()
// {
//     int myNum = 15;
//     printf(myNum); // Nothing happens here, because unlike Python, C doesn't automatically print the value of a variable. I have to get familiar with format specifiers.
//     return 0;
// }

// int main()
// {
//     int myNum = 15;
//     printf("%d", myNum);
//     return 0;
// }

/*Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value.

A format specifier starts with a percentage sign %, followed by a character. To output the value of an int variable, we need to use the format specifier %d surrounded by double quotes(""), inside the printf() function.

To print other types, we need to use %c for char and %f for float
*/

int main()
{
    int myNum = 1;
    float myFloatNum = 5.66;
    char myLetter = 'N';

    // print variables
    // printf("%d\n", myNum);
    // printf("%f\n", myFloatNum);
    // printf("%c\n", myLetter);

    // combine both text and a variable
    // printf("My favorite number is:%d\n", myNum);

    // print different types in a single printf() function
    printf("My favorite number is %d and my letter is %c\n", myNum, myLetter); // It is possible to print values without storing them in a variable as well

    return 0;
}