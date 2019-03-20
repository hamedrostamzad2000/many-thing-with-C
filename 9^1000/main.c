#include <stdio.h>

int main()
{
        int n,m;
        printf("Enter a number\n");
        scanf("%d",&n);
        printf("Enter another number\n");
        scanf("%d",&m);
        int k=1;
        for(int i=1;i<=m;i++){
           k=n*k;
        }
        printf("%d",k);
    return 0;
}
