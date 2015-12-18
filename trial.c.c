#include<stdio.h>
int no_of_chars(char x[50]);
void separate_digits(char c[50],char d[50],int m,int n);
void adder(int x[50],int y[50],int i,int j);
int highvalue(int m,int n);
void carry(int r[50],int i,int j);
void main()
{
char a[50],b[50];
int i,j;
scanf("%s",a);
scanf("%s",b);
i=no_of_chars(a);
j=no_of_chars(b);
printf("\ni=%d,j=%d\n",i,j);
separate_digits(a,b,i,j);
}
int no_of_chars(char x[50])
{
int y=0;
while(x[y]!='\0')
{
x[y]=x[y]/10;
y++;
}
return y;
}
void separate_digits(char c[50],char d[5],int m,int n)
{
int p[50],q[50];
int k,i=0;
for(k=m+n;k>0;k--)
{
p[k]=0;
q[k]=0;
}
for(k=m+n;k>n;k--)
{
	q[k]=((int)c[i])%10;
	c[i]=(int)c[i]/10;
printf("\nq=%d,c=%c",q[k],c[i]);
i++;
}
i=0;
for(k=m+n;k>m;k--)
{
p[k]=(int)d[i]%10;
d[i]=(int)d[i]/10;
printf("\np=%d",p[k]);
i++;
}
adder(p,q,m,n);
}
void adder(int x[50],int y[50],int i,int j)
{
int r[50];
int f,k,h,s;
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
printf("\nr=%d",r[f]);
}
printf("sum=%d",s);
}

