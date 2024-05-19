#include<stdio.h>
void prime(){
    int x,y,count;

  for(x=1; x<=50; x++){
  	count=0;
    for(y=2; y<=x/2; y++){
        if(x%y==0){
            count++;
      }
   }
      if(count==0 && x!=1){
       printf("%d ",x);
   }
}
}
int main(){
	prime();
}