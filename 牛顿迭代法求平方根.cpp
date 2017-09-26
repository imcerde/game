#include<stdio.h>
int main(void){
	double a,x;
	printf("Please insert the number that you want to root:");
	scanf("%lf",&a,&x);
	if(a==0){
		printf("The answer is 0.");
	}	
	else if(a==1){
		printf("The answer is 1.");
	}
	else{
		x=a;
		for(int i=0;i<100;i++){
			x=x-0.5*(x*x-a)/x;
		}
		printf("The answer is %lf.",x);
	}
	return 0;
} 
