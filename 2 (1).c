/*WAP to make below Pattern    5 10 15 20 25    5 10 15 20    5 10 15    5 10    53.*/

#include <stdio.h>
int main(){
	int i,j;
	
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d ",i*j);
		}
		printf("\n");
	}
} 
