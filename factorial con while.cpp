# include <stdio.h>

int main(){
	int n, fact;
	
	printf("ingrese el numero:  ");
	scanf("%i",&n);
	printf("\n");
	fact=1;
	if(n==0){
		printf("El factorial es 1");}
		
		
		else{
			
			while(n!=0){
			
			fact=fact*n;
			n=n-1;
			
			};
			printf("El factorial es: %i ",fact);
		};
	
	
}
