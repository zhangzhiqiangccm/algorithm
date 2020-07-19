/*
输入格式：在一行中给出正方形边长N（3<=N<=20）和组成正方形的字符C，间隔一个空格。
输出格式：由给定字符C画出正方形。为了让结果看上去更像正方形，所输出的行数实际上是列数的50%。 
*/

# include <stdio.h>
int main(){
	int row,col;
	char c;
	scanf("%d %c",&col,&c);
	if(col%2 ==1) row=col/2+1;
	else row = col/2;
	// 第一行
	for (int i=0;i< col;i++){
		printf("%c",c);
	} 
	printf("\n");
	// 第2 至 row-1行
	for(int i =2; i < row ;i++){
		printf("%c",c);  //每行第一个
		for(int j = 0;j<col -2;j++){
			printf(" ");
		}
		printf("%c\n",c); 
	} 
	for(int i =0;i<col;i++){
		printf("%c",c);
	}
	
	
	
	return 0;
} 
