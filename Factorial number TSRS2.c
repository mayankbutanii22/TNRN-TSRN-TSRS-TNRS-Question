#include<stdio.h>
int fact(){
int x,fact=1,n;
	for(x=1; x<5; x++){
		fact=fact*x;
	}
	return fact=fact*x;
}
int main(){
	printf("%d",fact());
	fact();
}