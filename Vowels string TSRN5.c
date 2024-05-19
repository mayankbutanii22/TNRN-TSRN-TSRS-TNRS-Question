#include<stdio.h>
#include<string.h>
void vowels(char str[26]){
	int x,c,count=0;
	for(x=0; str[x]!='\0'; x++){
		c= str[count];
          if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I'|| c=='o' || c=='O' || c=='u' || c=='U'){
          printf("%c ", c);
     }
     count++;
	}
}
int main(){
	vowels("a,e,i,o,u");
}