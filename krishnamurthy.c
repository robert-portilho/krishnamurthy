#include <stdio.h>

long int fatorial(int n)
{
    if(n <= 1) return 1;

    return n * fatorial(n-1);
}

bool check(int n)
{
    int sum = 0;

    while(n > 0) {
        sum += fatorial(n % 10);
        n /= 10;
    }

    return sum == n;
}


int main() 
{
    for(int i = 1; i <= 1000000; i++){
        if(check(i)){
            printf("%d is a Krishnamurthy number", i);
        }
    }
}