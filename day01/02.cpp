/*
������������֯һ�����������ݱ������ͳ�Ƴ�ĳ��ǿѧУ����ӡ� 
�����ʽ���ڵ�һ�и���������100000��������N��������������
          ����N�У�ÿ����һλ�����ߵ���Ϣ�ͳɼ�����ϢΪѧУ��ţ���1��ʼ���������ɼ��ٷ��ƣ��ո�ָ���
�����ʽ�������ܵ÷���ߵ�ѧУ��ż��ܷ֣��м�ո�ָ�����Ψһ��û�в��С�   
*/ 
/*˼·��1.������school[maxn]��¼ÿ��ѧУ���ܷ֣���ֵΪ0����ÿһ�������ѧУachID�����Ӧ�ķ���score����school[schID]+=score.
        2.����MAX��¼����ܷ֣�����k��¼����ֵܷ�ѧУ��ţ����ϸ��������������� 
*/ 
# include<stdio.h>
const int maxn = 100000;
int school[maxn] = {0};
int main(){
	int n ,schID,score;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&schID,&score);
		school[schID] = school[schID] +score;
	}
	int k =1,MAX = -1;
	for(int i = 0;i<n;i++){
		if(school[i] > MAX){
			MAX = school[i];
			k = i;
		}
	}
	printf("%d %d",k,MAX);
	return 0;
} 
