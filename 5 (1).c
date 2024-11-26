/*WAP to make below series    100 90 80 70 60 50 40 30 20 10*/

#include<stdio.h>
int main(){
	int i,num=100;
	for(i=1;i<=10;i++){
		printf("%d ",num);
		num-=10;
	}
	printf("\n");
}
