/*
�����ʽ����һ���и��������α߳�N��3<=N<=20������������ε��ַ�C�����һ���ո�
�����ʽ���ɸ����ַ�C���������Ρ�Ϊ���ý������ȥ���������Σ������������ʵ������������50%�� 
*/

# include <stdio.h>
int main(){
	int row,col;
	char c;
	scanf("%d %c",&col,&c);
	if(col%2 ==1) row=col/2+1;
	else row = col/2;
	// ��һ��
	for (int i=0;i< col;i++){
		printf("%c",c);
	} 
	printf("\n");
	// ��2 �� row-1��
	for(int i =2; i < row ;i++){
		printf("%c",c);  //ÿ�е�һ��
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
