#include<stdio.h>
int a[50],b[50],i,j,k=3,number;
void get_digit(int orig,int mult);
void sort(int num1[10],int num2[10]);
void display(int count);
void main()
{
    int num=100000,res;
    while(num<500000)
    {
        res=num*2;
        get_digit(num,res);
        num++;
    }
}
void get_digit(int orig,int mult)
{
    int dig2=mult;
    int dig1=orig;
    number=orig;
    int j;
    i=0;
    while(dig1!=0)
    {
        a[i]=dig1%10;
        dig1=dig1/10;
        i++;
    }
    j=0;
    while(dig2!=0)
    {
        b[j]=dig2%10;
        dig2=dig2/10;
        j++;
    }
    sort(a,b);
}
void sort(int num1[10],int num2[10])
{
    int temp,count;
    for(i=0; i<5; i++)
    {
        for(j=i+1; j<6; j++)
        {
            if(num1[i]>num1[j])
            {
                temp=num1[i];
                num1[i]=num1[j];
                num1[j]=temp;
            }
            if(num2[i]>num2[j])
            {
                temp=num2[i];
                num2[i]=num2[j];
                num2[j]=temp;
            }
        }
    }
    count=0;
    for(i=0; i<6; i++)
    {
        if(a[i]==b[i])
        {
            count++;
        }
    }
    display(count);
}
void display(int count)
{
    int res2;
    if(count==6)
    {
        if(k<7)
        {
            res2=number*k;
            if(res2<1000000)
            {
                k=k+1;
                get_digit(number,res2);
            }
            else
            k=3;
        }
        else
        {
            printf("\n%d",number);
            k=3;
        }
        k=3;
    }


}
