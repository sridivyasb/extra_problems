#include<stdio.h>
int str_to_int(char string[50]);
void separate_digits(int c,int d);
void adder(int x[50],int y[50],int k);
void main()
{
    char str1[50],str2[50];
    int a,b;
    gets(str1);
    gets(str2);
    a=str_to_int(str1);
    b=str_to_int(str2);
    separate_digits(a,b);
}
int str_to_int(char string[50])
{
    int i=0,num=0;
    while(string[i]!='\0')
    {
        num = num*10 + (string[i] - 48);
        i++;
    }
    return num;
}
void separate_digits(int c,int d)
{
    int k=0,i,j,a,p[50],q[50];
    a=c;
    while(a!=0)
    {
        a=a/10;
        k++;
    }
    j=k;
    while(c!=0)
    {
        p[j]=c%10;
        c=c/10;
        q[j]=d%10;
        d=d/10;
        j--;
    }
    adder(p,q,k);
}
void adder(int x[50],int y[50],int k)
{
    int result[50],i=1,j,h;
    while(i<=k)
    {
        while(x[i]+y[i]<=9)
        {
            result[i]=x[i]+y[i];
            i++;
        }
        if((x[i]+y[i])>9&&i<=k)
       {
    result[i]=(x[i]+y[i])%10;
    j=i-1;
    if(j!=0)
    {
        if(result[j]==9)
        {
            result[j]=0;
            j--;
        }
        result[j]=result[j]+1;
       }
       }
       i++;
    }
    printf("\nresult=");
    for(j=1;j<=k;j++)
    {
        printf("%d",result[j]);
    }
}
