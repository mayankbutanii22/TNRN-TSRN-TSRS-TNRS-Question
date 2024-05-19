#include<stdio.h>
int evenodd(){
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
    return (a%2==0) ? printf("\n%d is even.",a) : printf("\n%d is odd.",a);
	
}
int main(){
	printf("%d",evenodd());
	evenodd();
}