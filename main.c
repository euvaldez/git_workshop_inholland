#include <stdio.h>

int calculateFibonnaci();
/**
 * TODO add a nice message in the prompt to ask for the number
 * Given a number display its Fibonnaci series
 * @return int
 */
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

/**
 *
 * @param int fibo_number
 * @return int
 */
int calculateFibonnaci(int fibo_number)
{
    if ( fibo_number == 0 )
        return 0;
    else if ( fibo_number == 1 )
        return 1;
    else
        return (calculateFibonnaci(fibo_number-1) + calculateFibonnaci(fibo_number-2) );
}