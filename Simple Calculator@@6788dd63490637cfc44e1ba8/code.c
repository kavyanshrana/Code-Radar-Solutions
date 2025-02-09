#include <stdio.h>

int main() {
    int a,b;
    char o;
    scanf("%d %d %c", &a,&b,&o);
    switch(o)
    {
        case '+':
        printf("%d", a+b);
        break;
        case '-':
        printf("%d", a-b);
        break;
        case '*':
        printf("%d", a*b);
        break;
        case '/':
        printf("%d", a/b);
        break;
        default:
        printf("Error");
    }
    return 0;
}