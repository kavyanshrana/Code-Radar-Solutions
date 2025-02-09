#include <stdio.h>

int main() {
    int num,div;
    scanf("%d %d", &num,&div);
    if (num%div==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}