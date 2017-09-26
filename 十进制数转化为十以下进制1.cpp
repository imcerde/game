#include<stdio.h>
int main(void)
{
	int a,b,c;
	int f=0;
    int	i=0;
	printf("Please insert two munbers:");
	scanf("%d%d",&a,&b);
	while(a>b)
	{
		c=a%b;
		a=a/b;
		for(int j=0;j<i;j++)
		{
			c*=10;
		}
		f+=c;
		i++;	
	}
	for(int j=0;j<i;j++){
		a*=10;
	} 
	f+=a;
	printf("%d",f);
	return 0;
}	
