#include <stdio.h>

int factorial(int n){
    int fact = 1;
    for(int i=2;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}

int main()
{
    int n;
    printf("enter a natural number: ");
    scanf("%d", &n);

    int fact = factorial(n);
    printf("factorial of n is %d", fact);
    return 0;
}