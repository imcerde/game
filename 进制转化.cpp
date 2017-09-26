#include<stdio.h>
int main(void)
{
	int a,b,c;
	int f=0;
    int	i=0;
	printf("请输入两个数：");
	scanf("%d%d",&a,&b);
	while(a>b||a%b!=0)
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
	printf("%d",f);
	return 0;
}	
