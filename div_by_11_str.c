#include<stdio.h>
void arr(int n);
int div_by_11(int m,int value);
void main()
{
char string[1000];
int i=0,num=0;
gets(string);
while(string[i]!='\0')
{
 num = num*10 + (string[i] - 48);
i++;
}
    arr(num);
}
void arr(int n)
{
    int i=0,a[50],val,k,evenplace_value=0,oddplace_value=0;
    while(n%10!=0)
    {
        a[i]=n%10;
        n=n*0.1;
        i++;
    }
    k=i;
    i=0;
    while(i<k)
    {
        val=a[i];
        evenplace_value=div_by_11(evenplace_value,val);
        i=i+2;
    }
    i=1;
    while(i<k)
    {
        val=a[i];
        oddplace_value=div_by_11(oddplace_value,val);
        i=i+2;
    }
    if(evenplace_value==oddplace_value)
    {
        printf("\ndivisible by 11");
    }
    else
    {
        printf("\nnot divisible by 11");
    }
}
int div_by_11(int m,int value)
{
    m=m+value;
    return m;
}
