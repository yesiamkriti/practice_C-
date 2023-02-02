// read a sequence of numbers until a-1 is read. Output the length of longest contiguous increasing sub-sequence. eg. 9 2 4 0 3 4 6 9 2 -1,  11 9 7 8 11 12 15 15 -1
// largest contiguous sub_sequnce is 7 8 11 12 15 and has length 5
#include<stdio.h>
main(){
    int prev; int curr; int len=0; int maxlen=0 ;
    scanf("%d",&prev);
    
    if (prev!= -1){
        len=1;maxlen=1;
        scanf("%d",&curr);
        
        while (curr != -1){
            if (prev < curr){
                len = len +1;
            }
            else{
                if (maxlen < len){
                    maxlen = len;
                }
                len = 1;
            }
            prev = curr;
            scanf("%d",&curr);
        }
        if(maxlen < len){
            maxlen=len;
            printf("%d",maxlen);
        }
    }
}