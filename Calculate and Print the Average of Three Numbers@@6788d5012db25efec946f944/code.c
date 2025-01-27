#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    printf("Average: %.2f", (a+b+c)/3);
    return 0;
}