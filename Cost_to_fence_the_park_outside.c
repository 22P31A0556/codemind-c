#include<stdio.h>
int main()
{
    int l,b,w,c,a,d,p;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a=(l+2*w)*(b+2*w);
    d=l*b;
    p=(a-d)*c;
    printf("%d",p);
}