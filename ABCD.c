#include <stdio.h>
#include <stdlib.h>



int main()
{
	int n=0;
	char a[2][n];
	
	scanf("%d",&n);
	
	for (int i=0;i<n;i++)
	{
		scanf("%c",&a[0][i]);
		a[1][i]=i;
	}
	
	
}
