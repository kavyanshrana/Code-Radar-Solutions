#include <stdio.h>
int main()
{
    int n;
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            printf("* ");
        }
        printf(\n);
    }
    return 0;
}