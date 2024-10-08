#include <stdio.h>
#include <math.h>
int isprime(int n);

int main(void)
{
    int a;
    scanf("%d",&a);
    if (isprime(a)) printf("a prime\n");
    else printf("not a prime\n");
    return 0;
}

int isprime(int n)
{
    int ni;
    if (n <= 1) return 0;
    //if (n == 2) return 1;
    //if (n % 2 == 1) return 0;
    for (ni=2; ni < sqrt(n); ni=ni+1)
        if (!(n%ni)) return 0;
    // for (ni=3; ni < sqrt(n); ni=ni+2)
    //     if (!(n%ni)) return 0;
    return 1;
}