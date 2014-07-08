#include <stdio.h>
int main()
{
	int n=5, f,c;
	for(f=0; f<n; f++)
	{
		for(c=5; c>f; c--)
		{
			printf("*");
		}	
		printf("\n");
	} 	
	return 0;
}