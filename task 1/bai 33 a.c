#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i,x,d,S=0,Uk,Un,n;
    printf("Nhap vao U1:");
    scanf("%d",&x);
    printf("Nhap vao cong sai d:");
    scanf("%d",&d);
    printf("Nhap vao so phan tu:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        Uk = x + i*d;
        S+=Uk;
    }
    Un = x + (n-1)*d;
    printf("\nTong =  %d\nPhan tu Un= %d",S,Un);
}
