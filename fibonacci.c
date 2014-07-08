#include <iostream.h>
#include <stdio.h>
#include <conio.h>

void Fibonacci(int n) 
{
  long i,b1=1,b2=0,Aux;
  for (i=1;i<=n;i++)
  {
    Aux=b2;
    printf("%ld + %ld = %ld\n\r",b1,b2,b1+b2);
    b2= b1 + b2;
    b1= Aux;
  }
}


void main()
{
  int n;
  int Fib;
  
  printf("Cuantos d¡gitos deseas calcular: ");
  cin >> n;

  Fibonacci(n);
  
  printf("\n\n\rPresiona una tecla...");
  getch();
}

	
