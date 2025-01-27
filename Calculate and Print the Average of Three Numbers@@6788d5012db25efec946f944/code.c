#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    scanf("%d\t", &a);
    scanf("%d\t", &b);
    scanf("%d", &c);
    printf("Average: %.2f", (a+b+c)/3);
    return 0;
}