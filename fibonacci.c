#include <stdio.h>
int fibonacci(int n)
{
    if (n<2)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
   int num=0,res=0,i;
    printf("Introduce el numero para fibonacci: ");
    scanf("%d",&num);
    
    for(i=0;i<=num-1;i++)
    {
        res = fibonacci(i);
        printf("%i  ", res);
    }
        printf("\n");
    return 0;
}
