// 2 계단 오르기 (1칸 or 2칸)
#include <stdio.h>

int climbStairs(int n) {
    if (n <= 1) {
        return 1;
    }
    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main() {
    int stairs;
    printf("계단의 개수를 입력하세요: ");
    scanf("%d", &stairs);

    int ways = climbStairs(stairs);
    printf("계단을 오를 수 있는 방법의 수: %d\n", ways);

    return 0;
}