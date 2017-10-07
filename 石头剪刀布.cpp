#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int main(void) { 
Label_3:int a=0;
int b=0;
int c=0;
int i=2；
int j,k;
printf("                                 无聊的石头剪刀布游戏\n"); 
Label_1:printf("你选择出：\n");
printf("1.石头	2.剪刀	3.布\n");
srand((unsigned int)time(NULL));/*srand((unsigned int)_getpid()); 得到当前进程数*/ 
j=rand() % 3;
if(i==j){
	printf("平局!\n");
	c+=1;
}
else if(i<j){
	printf("你输了！\n");
	b+=1;
}
else if(i>j){
	printf("你赢了！\n");
	a+=1;
}
Label_2:printf("1.继续	2.查询比分	3.重新开始	4.结束游戏\n");
scanf("%d",&k);
if(k==1){
	goto Label_1; 
}
else if(k==2){
	printf("赢：%d	输：%d	平:%d\n",a,b,c);
	goto Label_2; 
} 
else if(k==3){
	goto Label_3;	
}
else{
	if(a>b){
		printf("才赢这几把，还好意思结束！"); 
	}
	else if(a<=b){
		printf("简单电脑都打不过，还是好好学习吧！"); 
	}
	
}
return 0; 
} 
