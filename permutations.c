#include<stdio.h>
void swap(int i,int j);
void permute();
void display();
int n=8,count=0,a[10];
void main()
{
    int x;
    for(x=0; x<n; x++)
    {
        scanf("%d",&a[x]);
    }
    permute();
}
void swap(int i,int j)
{
    int temp;
    temp = a[i];
    a[i]=a[j];
    a[j]= temp;
}
void display()
{
    int x;
    for(x=0; x<n; x++)
    {
        printf("\t%d",a[x]);
    }
    printf("\n");
    count++;
}
void permute()
{
    int x,y,k,p=n,q=1;
    while(p!=0)
    {
        q=q*p;
        p=p-1;
    }
    while(count<q)
    {
        for(y=0; y<n-1; y++)
        {
            swap(y,y+1);
            display();
        }
        swap(0,1);
        display();
        for(y=n-1; y>0; y--)
        {
            swap(y,y-1);
            display();
        }
        swap(n-1,n-2);
        display();
}
}
