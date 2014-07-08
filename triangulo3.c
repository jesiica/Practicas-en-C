#include <stdio.h>
int main ()
{
    
    int n=5, f, c;
    
    
    for (f = 1; f<=n; f++){
        for ( c = f; c<=n-1; c++)
            printf(" ");
        for (c = 1; c<=f; c++)
            printf("*");
        printf("\n");
    }
    
}