//convertng binary number to octal number
#include<stdio.h>
int get_num(int d);
void main()
{
int binary_num,octal_num=0,r=1,d,i;
scanf("%d",&binary_num);
while(binary_num!=0)
{
d=binary_num%1000;
binary_num=binary_num/1000;
octal_num=get_num(d)*r+(octal_num);
r=r*10;
}
printf("\noctal_num=%d",octal_num);
}
int get_num(int d)
{
	int k=0,i,j=1;
	while(d!=0)
	{
		i=1;
	while(i<5)
	{
	k=(d%10)*i+k;
	d=d/10;
	i=i*2;
    j++;
	}
    }
	return k;
}
