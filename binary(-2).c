#include<stdio.h>
int binary_value( int n,int c,int r);
void main()
{
	int num,p,q;
	scanf("%d",&num);
	p=binary_value(num,0,1);
	printf("\n%d with base(-2)=%d",num,p);
}
	
	int binary_value( int n,int c,int r)
	{
	if(n!=0)
	{
	c=((n%2)*r)+c;
	r=r*10;
	n=n/2;
	if(n!=0)
	{
	if(n%2!=0)
	{
		c=((n%2)*r)+c;
		n=(n+1)/2;
	}
	else
	{
		c=((n%2)*r)+c;
		n=n/2;
	}
		r=r*10;
	}
	}
	if(n!=0)
	{
		binary_value(n,c,r);
	}
	else
	return c;
    }

