#include<stdio.h>
int main(void){
	int m1,n1,m2,n2;
	int sum=0;
	Label_1:printf("请输入矩阵A的行数和列数：\n");
	scanf("%d%d",&m1,&n1);
	printf("请输入矩阵B的行数和列数：\n");
	scanf("%d%d",&m2,&n2);
	if(n1!=m2){
		printf("无法计算!\n");
		goto Label_1; 
	}
	else{
		int a[m1][n1],b[m2][n2]; 
		for(int i=0;i<m1;i++){
			for(int j=0;j<n1;j++){
				printf("请输入元素a%d%d:",i+1,j+1);
				scanf("%d",&a[i][j]);
				}
		}
		for(int i=0;i<m2;i++){
			for(int j=0;j<n2;j++){
				printf("请输入元素b%d%d:",i+1,j+1);
				scanf("%d",&b[i][j]);
				}
		}	
		for(int i=0;i<m1;i++){
			for(int j=0;j<n2;j++){
				for(int k=0;k<n1;k++){
					sum+=a[i][k]*b[k][j];
				}
				printf("%d \t",sum);
				sum=0;
			}
			printf(" \n");	
		}
	}
	goto Label_1;	
return 0;	
} 
