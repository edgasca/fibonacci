
//Author: Eduardo de Jesús Gasca Laguna

#include <stdio.h>
#include <stdlib.h>

void fibonacci(int max);

int main()
{
    int maxnum;
    
    printf("Max limit:");
    scanf("%d", &maxnum);

    fibonacci(maxnum);

    return 0;
}

void fibonacci(int max)
{
    int a=0, b=1;

    for(int i=0;i<=max;i++)
    {
        printf("%d\n",a);
        printf("%d\n",b);
        a = a + b;
        b = b + a;
    }
}