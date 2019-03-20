#include <stdio.h>
#include <stdlib.h>

void longMultiply(int *a, int len, int operand)
{
    int i;

    for(i=0;i<len;i++)
        a[i] = a[i] * operand;

    for(i=0;i<len;i++)
        if (a[i] >= 10)
        {
            a[i+1] = a[i+1] + (int)(a[i] / 10);
            a[i] = a[i] % 10;
        }
}

int fact(int n)
{
    int i, res = 1;

    for(i=1;i<=n;i++)
        res = res * i;

    return res;

}

int main()
{
    int k[1000];
    int i;

    for(i = 0;i < 1000; i++)
        k[i] = 0;

    k[0] = 1;

    //int p;

    //p = fact(5);

    for(i=0;i<1000;i++)
        longMultiply(k,1000,9);

    int prefixZeroCount = 0;
    i = 999;
    while(k[i]==0)
    {
        i--;
        prefixZeroCount++;
    }
    printf("%d\n",prefixZeroCount);

    for(i=999-prefixZeroCount;i>=0;i--)
        printf("%d",k[i]);

    printf("\n\n");

    //printf("Hello world!\n");
    return 0;
}
