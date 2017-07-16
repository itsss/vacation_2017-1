#include<stdio.h>

int main()

{

    int a,b,c;

    int min,mid,max,i=1;

    scanf("%d %d %d", &a, &b, &c);

    if(((a<b)&&(b<c)) || ((a>b)&&(a<c)))
    {
        min=a;
        mid=b;
        max=c;
    }
    if(((b<a)&&(a>c)) || ((a>b)&&(a<c)))
    {
        min=c;
        mid=a;
        max=b;
    }
    if(((c<a)&&(c>b)) || ((c>a)&&(c<b)))
    {
        min=b;
        mid=c;
        max=a;
    }
    printf("\nMid is %d",mid);
}
