/*
�������������������Ǹ�ʮ��������A��B�Լ�D���������������A+B��D������ 
�����ʽ����һ�������θ�����������A,B,D���������� 
�����ʽ�� A+B��D������ 
*/
# include <stdio.h>
int main(){
	int a,b,d;
	scanf("%d%d%d",&a,&b,&d);
	int sum = a+b; //��sumת����D���� 
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
