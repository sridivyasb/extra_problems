#include<stdio.h>
void form_q(char r[100],int k);
void arr(long int n);
int divisible_by_11(int m,int value);
void main()
{
    char p[100];
    int k;
    gets(p);
    scanf("%d",&k);
    form_q(p,k);
}
void form_q(char r[100],int k)
{
    char q[1000];
    int h,i=0,m=0,j;
    long int num=0;
    while(r[i]!='\0')
    {
        i++;//no of digits in p
    }
    h=i;
    for(j=0; j<k; j++)
    {
        for(i=0; i<h; i++)
        {
            q[m]=r[i];
            m++;
        }
    }
    q[m]='\0';
    printf("Q=");
    puts(q);
    m=0;
    i=0;
    while(q[i]!='\0')
    {
        num = num*10 + (q[i] - 48);
        i++;
    }
    arr(num);
}
void arr(long int n)
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
