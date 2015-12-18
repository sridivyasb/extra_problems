#include<stdio.h>
void function(int i,int b[10000]);
void main()
{
	int i,n,b[10000];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&b[i]);
	}
	function(2,b);
}
void function(int i,int b[10000])
{
	int j,m;
	while(b[i-1]>0&&b[i+1]>0)
	{
		j=i;
		i=i*2;
	}
	if(b[i-1]==0&&b[i+1]==0)
	{
		function((i+j)/2,b);
	}
	else if(b[i-1]>0&&b[i+1]==0)
	{
		if(b[i]==0)
		{
		m=i-3;
	    }
	    else
	    {
	    	m=i-2;
		}
		printf("\nno of elements=%d",m);
	}
}
