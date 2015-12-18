#include<stdio.h>
int mult(int x,int y);
void main()
{
    int x,y,result;
    scanf("%d",&x);
    scanf("%d",&y);
    result=mult(x,y);
    printf("%d",result);
}
    int mult(int x,int y)
    {
        int i=0,k,c,res,b[50];
    while(y!=0)
    {
        b[i]=y%2;
        y=y/2;
        i++;
    }
    k=i;
    res=0;
    for(i=0; i<k; i++)
    {
        c=0;
        if(b[i]!=0)
        {
            c=(c|x);
        }
        else
        {
        }
        res=c-(-res);
        x=x<<1;
    }
return res;
}
