#include <stdio.h>

int GCD(int a,int b);

int main(void) {
    int a, b;
    printf("Enter two positive integers\n");
    scanf("%d%d",&a,&b);
    printf("GCD of (%d,%d) is %d\n", a, b, GCD(a,b));
    return 0;
}

// Get GCD in a brute force way
int GCD(int a, int b)
{
    int nd=a;
    if (nd < b) nd = b;
    for (①; ②; nd=nd-1)
        if (③) break;
    return (④);
}