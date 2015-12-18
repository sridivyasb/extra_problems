#include<stdio.h>
int i,j,z,total_cost=0;
int cost[10],index[50];
void count(int a[50],int n,int k);
void find_cost(int index[50],int k);
void main()
{
    int a[50],n,k;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the k value");
    scanf("%d",&k);
    z=k;
    count(a,n,k);
}
void count(int a[50],int n,int k)
{
    int count=0;
    for(i=0; i<10; i++)
    {
        index[i]=0;
    }
    for(i=0; i<n; i++)
    {
        index[a[i]]=index[a[i]]+1;
    }
    for(i=0; i<n; i++)
    {
        if(index[i]==k)
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("no cost");
    }
    else
    {
        printf("\nThe cost is  ");
        find_cost(index,k);
        printf("%d",total_cost);
    }
}
void find_cost(int index[50],int k)
{
    int cost[10],count=0,x,y=1,near_value;b
    for(i=0; i<10; i++)
    {
        if(index[i]==k-1)
        {
            for(x=1; x<10; x++)
            {
                if(index[x]>0&&x!=i&&index[i]!=k)
                {
                    index[i]=index[i]+1;
                    index[x]=index[x]-1;
                    if(x>i)
                    {
                        cost[y]=x-i;
                    }
                    else
                    {
                        cost[y]=i-x;
                    }
                    y++;
                }
            }
        }
        if(y>1)
        {
            break;
        }
    }
    if(y==1)
    {
        near_value=k-1;
        find_cost(index,near_value);
        find_cost(index,k);
    }
    else
    {
        for(j=1; j<y; j++)
        {
            total_cost=cost[j]+total_cost;
        }
    }
}
