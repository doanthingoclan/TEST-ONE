//Ma tran 4*5;//
#include<stdio.h>
void main(){
int a[4][5],*p,i,j;
p=a;
printf("Nhap ma tran 4*5 :\n");
for(i=0;i<4;i++)
{
    for(j=0;j<5;j++)
    {
        printf("Nhap A[%d][%d]=",i+1,j+1);
        scanf("%d",p+(i*5)+j);
    }
}
printf("Ma tran ban nhap:\n");
for(i=0;i<4;i++)
{
    for(j=0;j<5;j++)
    {
        printf("%d\t",*(p+(i*5)+j));
    }
    printf("\n");
}

}
