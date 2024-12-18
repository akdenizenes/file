#include <stdio.h>

int factorialRecursive(int number);

int main()
{
    int factorial_5 = factorialRecursive(4);
    printf("Factorial %d\n", factorial_5);
    return 0;   
}

int factorialRecursive(int number)
{
    //Base Case 
    if ( number == 1 || number == 0)
    {
        return 1;
    }

    return number * factorialRecursive(number-1);
}
