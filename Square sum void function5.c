#include<stdio.h>
void squaresum(){
	int x,square,sum=0;
	for(x=1; x<=10; x++){
		square=x*x;
		sum=sum+square;
		printf("%d ",square);
	}
		printf("\n%d ",sum);
}
int main(){
	squaresum();
}