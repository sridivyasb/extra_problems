#include<stdio.h>
int str_to_int(char string[50]);
int no_of_digits(int x);
void separate_digits(int c,int d,int m,int n);
void adder(int x[50],int y[50],int i,int j);
int highvalue(int m,int n);
void carry(int r[50],int i,int j);
void main()
{
	char str1[50],str2[50];
int i,j,a,b;
gets(str1);
gets(str2);
a=str_to_int(str1);
b=str_to_int(str2);
i=no_of_digits(a);
j=no_of_digits(b);
separate_digits(a,b,i,j);
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
int no_of_digits(int x)
{
int y=0;
while(x!=0)
{
x=x/10;
y++;
}
return y;
}
void separate_digits(int c,int d,int m,int n)
{
int k,p[50],q[50];
for(k=m+n;k>0;k--)
{
p[k]=0;
q[k]=0;
}
for(k=m+n;k>n;k--)
{
	q[k]=c%10;
	c=c/10;
}
for(k=m+n;k>m;k--)
{
p[k]=d%10;
d=d/10;
}
adder(p,q,m,n);
}
void adder(int x[50],int y[50],int i,int j)
{
int r[50],f,k,h,s;
f=i+j;
h=high_value(i,j);
while(f>=h)
{
r[f]=x[f]+y[f];
f--;
}
for(k=f;k>0;k--)
{
r[k]=0;
}
carry(r,i,j);
}
int high_value(int m,int n)
{
if(m>n)
return n;
else
return m;
}
void carry(int r[50],int i,int j)
{
int f,s=0;
for(f=i+j;f>0;f--)
{
if(r[f]*0.1!=0)
{
r[f-1]=r[f-1]+(r[f]/10);
r[f]=r[f]%10;
}
}
for(f=1;f<=i+j;f++)
{
s=s*10+r[f];
}
printf("sum=%d",s);
}

