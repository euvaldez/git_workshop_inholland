#include <stdio.h>

int calculateFibonnaci();

int main() {
    int n, i = 0, c;

    scanf("%d",&n);

    printf("Fibonacci series\n");

    for ( c = 1 ; c <= n ; c++ )
    {
        printf("%d\n", calculateFibonnaci(i));
        i++;
    }

    return 0;
}

int calculateFibonnaci(int fibo_number)
{
    if ( fibo_number == 0 )
        return 0;
    else if ( fibo_number == 1 )
        return 1;
    else
        return (calculateFibonnaci(fibo_number-1) + calculateFibonnaci(fibo_number-2) );
}