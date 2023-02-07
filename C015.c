#include<stdio.h>
int main(){
    int a;float b=0.0;
    for(a=1; a<=100; a+=1){
        b+=(1.0/a);
    }printf("%f",b);
}
