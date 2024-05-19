#include<stdio.h>
void odd(){
	int x;
	for(x=1; x<=20; x++){
		if(x%2==1){
			printf("%d ",x);
		}
	}
}
int main(){
	odd();
}