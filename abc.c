#include<stdio.h>
void assign(int a,int b)
{
    int* ptrX=a;
    int* ptrY=b;
    printf("%d %d",*ptrX,*ptrY);

}

int main()
{
    int t,n;
    scanf("%d",&t);

    assign(&x,&y);
    return 0;
}
