#include <stdio.h>

int main(){
    
    int nivel, f, c;
    printf("Introduce nivel del triangulo  ");
    scanf("%d",&nivel);
    
    for(f=1; f<=nivel; f++)
    {        
        for(c=1; c<=nivel-f; c++)
        {
            printf(" ");  
        }
        
        for(c=1;c<=2*f-1;c++){  
            printf("*");
        }
        printf("\n" ) ;
        
    }
}