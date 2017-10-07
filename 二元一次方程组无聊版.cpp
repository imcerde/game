#include<stdio.h>
int main(void){
	double x,y;
	printf("请将方程调整为ax+by+c=0\n"); 
	int i,k;
	printf("请输入方程个数(<=10):");
	scanf("%d",&i);
	if(i<2){
		printf("无法解出一组确定的数！");
	}
	else{
		double arr1[10],arr2[10],arr3[10];
		for(int j=0;j<i;j++){
		printf("请依次输入方程%d的x,y的系数和常数项:",j+1);
		scanf("%lf%lf%lf",&arr1[j],&arr2[j],&arr3[j]);
	}
			if(arr1[1]*arr2[0]==arr1[0]*arr2[1]){
				printf("无法解出一组确定的数！");
			} 
			else{
				x=(arr2[0]*arr3[1]-arr2[1]*arr3[0])/(arr1[0]*arr2[1]-arr1[1]*arr2[0]);
				y=(arr1[0]*arr3[1]-arr1[1]*arr3[0])/(arr1[1]*arr2[0]-arr1[0]*arr2[1]);
				if(i==2){
					printf("x=%lf",x);
					printf("y=%lf",y);
				}
				else{
					for(k=2;k<i;k++){
						if(arr1[k]*x+arr2[k]*y+arr3[k]!=0){
							printf("无法解出一组确定的数！");
							break;
						}
					}
					if(i==k){
						printf("x=%lf",x);
						printf("y=%lf",y);
					}
				}
			}
	} 
	return 0;
 } 
