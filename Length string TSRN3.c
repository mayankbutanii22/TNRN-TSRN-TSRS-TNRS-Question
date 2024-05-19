#include<stdio.h>
#include<string.h>
void lenth(char str[50]){
    int length = 0;
    printf("%s\n",str);
    length = strlen(str);
 
    printf("%d", length);
}
int main(){
	lenth("Development");
}