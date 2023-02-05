#include<stdio.h>
int main(){
    int a=1;float b=0.0;
    while (a<=10)
    {
        a+=1;
        b+=1.0/a;
    }
	printf("%f",b);
}
