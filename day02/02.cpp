/*
问题描述：输入两个非负十进制整数A和B以及D（进制数），输出A+B的D进制数 
输入格式：在一行中依次给出三个整数A,B,D（进制数） 
输出格式： A+B的D进制数 
*/
# include <stdio.h>
int main(){
	int a,b,d;
	scanf("%d%d%d",&a,&b,&d);
	int sum = a+b; //将sum转化成D进制 
	int ans[31],num = 0;
	do{
		ans[num++] = sum % d;
		sum = sum/d ; 
		
	}while (sum !=0);
	for (int i = num-1;i>=0;i--){
		printf("%d",ans[i]);
	}
	return 0; 
} 
