#include <stdio.h>    //librerias 
#include <stdlib.h>    //variables y su tipo 
int n; 
int fact; 

int main(){
	
    printf("\nIntroduce un numero para calcular el factorial\n"); //ingresa la cantidad del prestamo
    scanf("%d", &n);
    fact=1;
    if(n==0){
    	printf("1");
	}
    else{
    		do{
    		//printf("\n%d",n);
    		fact= fact*n;
    		n=n-1;
    		
   			}while(n>0);
    				printf("\n%d",fact);
    	
    }	
    
    	
}
