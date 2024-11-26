/*WAP to find factorial of give number using UDF5*/

#include<stdio.h>

	int factorial (int n){
		if(n==0){
			return 1;
		}
		else{
			return n*factorial(n-1);
		}
	}
	int main(){
	
	
	
	
	
	
	
	
	
	int num,fact;
	printf("enter the non nagitive integer:");
	scanf("%d",&num);
	if(num<0){
		printf("factorial is not defind for nagitive numbers\n");
	}
	else{
		fact=factorial(num);
		printf("factorial of %d=%d",num,fact);
	}

	return 0;
}
