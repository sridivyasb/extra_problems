#include<stdio.h>
int fact(int n);
int eval(int n);
void main()
{
    int n,p;
    scanf("%d",&n);
    p=eval(n);
    printf("%d",p);
}
int eval(int n)
{
    int i=0,j,k,c,y,res,l;
    int a[50],b[50];
    while(n!=0)
    {
        a[i]=n%10;
        n=n/10;
        i++;
    }
    k=i;
    l=k;
    for(i=0; i<k; i++)
    {
        b[l]=a[i];
        l--;
    }
    y=0;
    l=k;
    for(i=1; i<l; i++)
    {
        c=0;
        res=0;
        for(j=i+1; j<l+1; j++)
        {
    if(b[i]>b[j])
            {
                c++;
            }
        }
        if(c!=0)
        {
            res=c*fact(k-1);
        }
        y=y+res;
        k--;
    }
    return(y);
}
int fact(int n)
{
    int f;
    if(n!=1)
    {
        f=n*fact(n-1);
        return f;
    }
    else
    {
        return 1;
    }
}
