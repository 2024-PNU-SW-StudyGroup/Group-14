// 2 ��� ������ (1ĭ or 2ĭ)
#include <stdio.h>

int climbStairs(int n) {
    if (n <= 1) {
        return 1;
    }
    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main() {
    int stairs;
    printf("����� ������ �Է��ϼ���: ");
    scanf("%d", &stairs);

    int ways = climbStairs(stairs);
    printf("����� ���� �� �ִ� ����� ��: %d\n", ways);

    return 0;
}