/*
��һ��������,���Ҫ��M������ѯ������ÿ������N�����г��ֵĴ�������ô���԰�hashTable�����滻��Int�ͣ�
Ȼ��������N����ʱ����Ԥ���������������Ϊxʱ������hashTable[x]++�� 
*/
# include <cstdio>
const int maxn = 100010;
int hashTable[maxn] = {0};
int main(){
	int n,m ,x;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		hashTable[x]++;
	}
	for(int i =0;i<m;i++){
		scanf("%d",&x);
		printf("%d",hashTable[x]);
	}
	return 0;
}
