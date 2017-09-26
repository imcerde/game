#include<stdio.h>
int main(void){
	double j,a,b;
	double i=0.00000001;
	label_1:printf("Please insert one munber that you want to root:");
	scanf("%lf",&j);
	printf("Please insert two munbers:");
	scanf("%lf%lf",&a,&b);
	double q=0;
	if(a<b){
		q=a;
		a=b;
		b=q;	
	}
	if(a*a>=j&&b*b<=j) {
	double s=1;
	while(s>i){
		if((a+b)*(a+b)/4>j){
			a=(a+b)/2;
			}
		else{
			b=(a+b)/2;
			}
		s=a-b;
		}	
	printf("%lf的平方根为%lf",j,a);
	}
	else{
		printf("error\n");
		goto label_1;
	}
	return 0; 
} 
