#include<stdio.h>
void form_q(char r[100],int k);
int div_by_3(long int n);
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
    long int num=0,result;
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
    result=div_by_3(num);
    if(result==3||result==6||result==9)
    {
        printf("\ndivisible by 3");
    }
    else
    {
        printf("\nnot divisible by 3");
    }

}
int div_by_3(long int n)
{
    long int res=0;
    while(n!=0)
    {
        res=res+n%10;
        n=n*0.1;
    }
    if((res/10)!=0)
    {
        res=div_by_3(res);
    }
    else
    {
        return res;
    }
}
