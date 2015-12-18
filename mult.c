#include<stdio.h>
int mult(int x[50],int y[50],int p,int q);
void main()
{
    int a[10],b[5],i,j,c[10][5],p,r=1,count,res[15];
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<5; i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<15;i++)
    {
        res[i]=0;
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<10; j++)
        {
            p=mult(b,a,i,j);
            if(p/10==0)
            {
                res[i]=res[i]*10+p;
            }
            else
            {
                res[i]=res[i]*10+p;
                res[i-1]=res[i-1]+1;
            }
        }
    }
    for(i=3;i>=0;i--)
    {
        r=r*10;
        res[i]=res[i]*r;
        res[i]=res[i]+res[i+1];
    }
    printf("\n res=%d",res[0]);
}
int mult(int x[10],int y[50],int p,int q)
{
    int i=0,k,c,an=x[p],bn=y[q],res,b[50];
    while(bn!=0)
    {
        b[i]=bn%2;
        bn=bn/2;
        i++;
    }
    k=i;
    res=0;
    for(i=0; i<k; i++)
    {
        c=0;
        if(b[i]!=0)
        {
            c=(c|an);
        }
        else
        {
        }
        res=c+res;
        an=an<<1;
    }
    return res;
}
