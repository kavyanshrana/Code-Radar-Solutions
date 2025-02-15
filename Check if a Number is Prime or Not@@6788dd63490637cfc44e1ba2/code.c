#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    if(n<2){
        printf("Not Prime\n");
    }
    else{
        for(i=2; i<n; i++){
            if(n%i==0){
                printf("Not Prime\n");
                break;
            }
        }
        if(i==n){
            printf("Prime\n");
        }
    }
    return 0;
}