#include<stdio.h>
int eval(int x,int y,int a);
void main()
{
    int x,y,a,result;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&a);
    result=eval(x,y,a);
    printf("%d",result);
}
    int eval(int x,int y,int a)
    {
        int b,res,i=0,j,k,l,t,power[50];
    while(y!=0)
    {
        power[i]=y%2;
        y=y/2;
        i++;
    }
    k=i;
    l=i;
    for(i=1; i<k; i++)
    {
        if(power[i]!=0)
        {
            for(j=1; j<k; j++)
            {
                power[i]=2*j*power[i];
            }
        }
    }
    res=1;
    for(i=0; i<k; i++)
    {
        t=1;
        if(power[i]!=0)
        {
        for(j=0; j<l; j++)
        {
            t=(x*t);
        }
        l--;
        }
        b=(t%a);
        res=(res*b)%a;
    }
    return(res);
}
