#include<stdio.h>
void matrix(){
    int row,col;
	
	for(row=1; row<=3; row++){
		for(col=1; col<=3; col++){
			printf("* ");
		}
		printf("\n");
	}	
}
int main(){
	matrix();
}