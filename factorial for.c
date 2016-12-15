#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,c,fact;
	printf("Ingrese un numero menor a 13:\n");
	scanf("%d", &n);	{
		if (n>0&&n<13)		{
			printf("\nEl factorial es:\n%d!= ",n);
			printf("1");
			fact=1; {
				for (c = 2; c <= n; c++)
				printf("x%d",c);{
					for (c=1;c<=n;c++)
					fact = fact * c;
					printf("= %d\n", fact);
				}
			}
		}
		else	{
			if (n==0)	{
				printf("\nEl factorial es:\n0! = 1");
			}
			else 
				printf("\nError");
			}
		}
	return 0;
}
