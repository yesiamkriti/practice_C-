//  matrix problem
#include<stdio.h>
int main(){
    int row,col,rowsum,colindex,rowindex,a,rowsumsq; 
    printf("Enter the numbers of row : ");
    scanf("%d",&row);
    printf("Enter the numbers of col : ");
    scanf("%d",&col);
    while(rowindex<row){colindex  = 0;
        while(colindex < col){
            printf("a : ");
            scanf("%d",&a); 
            rowsum+=a;
            colindex+=1;       
        }
        rowsumsq=rowsumsq+(rowsum*rowsum);
        rowindex+=1;
    }
    printf("rowsum : %d\n",rowsum);
    printf("rowsumsq : %d",rowsumsq);
}
