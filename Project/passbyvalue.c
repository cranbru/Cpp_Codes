// C program to illustrate call by value
#include <stdio.h>

void swapx(int x, int y) // Formal Parameters
{
    int t;

    t = x;
    x = y;
    y = t;

    printf("Inside Function:\nx = %d y = %d\n", x, y);
}

// Main function
int main()
{
    int a = 10, b = 20;
    
    // Pass by Values
    swapx(a, b); // Actual Parameters

    printf("In the Caller:\na = %d b = %d\n", a, b);
    return 0;
}
























