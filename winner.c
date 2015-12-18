#include<stdio.h>
int i,j;
void winner_ele(int array[50],int result[50],int no_of_ele,int value_count);
void main()
{
    int arr[50],k,n,res[50];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        res[i]=arr[i];
    }
    scanf("%d",&k);
    winner_ele(arr,res,n,k);
}
void winner_ele(int array[50],int result[50],int no_of_ele,int value_count)
{
    int k,big_no,num;
    if(value_count%2!=0)
    {
        k=(value_count+1)/2;
    }
    else
    {
        k=value_count/2;
    }
    for(i=0; i<no_of_ele; i++)
    {
        if(i==0)
        {
            for(j=1; j<k; j++)
            {
                result[i]=result[i]+array[j];
            }
        }
        else if(i==no_of_ele-1)
        {
            for(j=no_of_ele-2; j>no_of_ele-1-k; j--)
            {
                result[i]=result[i]+array[j];
            }
        }
        else
        {
            for(j=1; j<k; j++)
            {
                if(i-j>=0)
                {
                    result[i]=result[i]+array[i-j];
                }
                if(i+j<no_of_ele)
                {
                    result[i]=result[i]+array[i+j];
                }
            }
        }
        if(value_count%2==0)
        {
            if(i!=0&&i-k>=0)
            {
                result[i]=result[i]+array[i-k];
            }
        }
    }
    big_no=0;
    for(i=0; i<no_of_ele-1; i++)
    {
        if(big_no<result[i+1])
        {
            big_no=result[i+1];
            num=array[i+1];
        }
    }
    printf("\nwinner number is %d",num);
}
