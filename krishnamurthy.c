#include <stdio.h>
#include <stdbool.h>


long int fatorial(long int d)
{
    if(d <= 1) return 1;

    return d * fatorial(d-1);
}

bool check(int n)
{
    long int sum = 0;
    long int aux = n;

    while(aux > 0) {
        sum += fatorial(aux % 10);
        aux = aux / 10;

        if (sum > n) return false;
    }

    return sum == n;
}


int main() 
{

    for(long int i = 1; i <= 1000000000; i++){
        if(check(i)){
            printf(" %ld is a Krishnamurthy number\n", i);
        }
    }



    return 0;
}