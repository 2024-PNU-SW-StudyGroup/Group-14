// Recursive Function Call

// Factorial
#include <stdio.h>

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n-1);
}

int main(void) {
    int n;

    scanf("%d", &n);
    printf("%d", factorial(n));

    return 0;
}


// 지역 변수 유효 범위
#include <stdio.h>

int foo(int n);

int main(void) {
    int a;
    int b = 3;

    a = 3;
    b = a * b;
    {
        int c;

        c = a - b;
        b = c * 3;
    }
    printf("%d\n", c); // c 유효 범위가 끝나서 오류남
    return 0;
}


// Prime Number
#include <stdio.h>
#include <math.h>

int isprime(int n) {
    if (n == 1) return 0;
    for(int i=2; i<=sqrt(n)+1; i++) {
        if (!(n%i)) return 0;
    }
    return 1;
}

int main(void) {
    int a;
    scanf("%d", &a);
    if (isprime(a))
        printf("a prime\n");
    else
        printf("not a prime\n");
    return 0;
}


// Greatest Common Divisor (최대공약수)
// + GCD를 이용하여 LCM, isCoprime 구현
#include <stdio.h>
int GCD(int a, int b) {
    int nd = a;
    if (nd < b) nd = b;
    for (; nd>=1; nd=nd-1)
        if (a%nd == 0 && b%nd == 0) break;
    return nd;
}

int LCM(int a, int b) {
    int nd = GCD(a,b);
    return (a/nd) * (b/nd) * nd;
}

int isCoprime(int a, int b) {
    if (GCD(a,b) == 1) return 1;
    else return 0;
}

int main(void) {
    int a, b;
    printf("Enter two positive integers\n");
    scanf("%d%d", &a, &b);
    printf("GCD of (%d,%d) is %d\n",
           a, b, GCD(a, b));
    printf("LCM of (%d,%d) is %d\n",
           a, b, LCM(a, b));
    printf("(%d,%d) isCoprime? %d\n",
           a, b, isCoprime(a, b));
    return 0;
}