#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int main(void) { 
Label_3:int a=0;
int b=0;
int c=0;
int i,j,k;
printf("                                 ���ĵ�ʯͷ��������Ϸ\n"); 
Label_1:printf("��ѡ�����\n");
printf("1.ʯͷ	2.����	3.��\n");
scanf("%d",&i);
srand((unsigned int)time(NULL));/*srand((unsigned int)_getpid()); �õ���ǰ������*/ 
j=rand() % 3;
if(i==j){
	printf("ƽ��!\n");
	c+=1;
}
else if(i<j){
	printf("�����ˣ�\n");
	b+=1;
}
else if(i>j){
	printf("��Ӯ�ˣ�\n");
	a+=1;
}
Label_2:printf("1.����	2.��ѯ�ȷ�	3.���¿�ʼ	4.������Ϸ\n");
scanf("%d",&k);
if(k==1){
	goto Label_1; 
}
else if(k==2){
	printf("Ӯ��%d	�䣺%d	ƽ:%d\n",a,b,c);
	goto Label_2; 
} 
else if(k==3){
	goto Label_3;	
}
else{
	if(a>b){
		printf("��Ӯ�⼸�ѣ�������˼������"); 
	}
	else if(a<=b){
		printf("�򵥵��Զ��򲻹������Ǻú�ѧϰ�ɣ�"); 
	}
	
}
return 0; 
} 
