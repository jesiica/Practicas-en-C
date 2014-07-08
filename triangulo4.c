
#include <stdio.h>
int main ()
{
    
    int n=5, f, c;
    

    for (f = 0; f<=n-1; f++){
        for ( c =0; c<=f; c++){
            printf(" ");}
        for (c = f; c<=n-1; c++){
            printf("*");}
        printf("\n");
    }
}