#include<stdio.h>
int main()
{
  int prev;int curr;int len; int maxlen;
  printf("prev: ");
  scanf("%d",&prev);
  len = 1;maxlen =1;
  if (prev!=-1){
    do{
        printf("curr: ");
        scanf("%d",&curr);
        if (prev<curr){
            len=len+1;
           
        }else{
            if (maxlen<len){
                maxlen =len;
            } 
            len=1;
        }
        prev = curr;
    }while (curr!= -1);
  }
  if (maxlen < len ){
    maxlen =len;
  }
  printf("%d",maxlen);
  return 0;
}
