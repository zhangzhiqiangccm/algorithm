/*
���⣺����N�����������ٸ���M��������������M�����е�ÿ�����Ƿ���N�г��ֹ������һ�δβ�ѯ��
      ��ô����ʱ�临�ӶȻ�ܸߣ�O��MN�������Բ����ռ任ʱ�䣬�趨һ��bool������hashTable������
	  hashTable[x]Ϊtrueʱ����ʾM�е�����N�г��ֹ�����֮δ���֡�hashTable��ʼҪȫ����ʼ��Ϊfalse��
	  Ҳ���ǳ�ʼ״̬�¶�δ���ֹ�������һ��ʼ����N�� ��������ʱ��Ϳ���Ԥ�������������Ϊxʱ����
	  hashTable[x] Ϊtrue����������M������ѯ����������ֱ��ͨ��hashTable�������ж�ÿ�����Ƿ񶼳��ֹ��� 

*/
# include<stdio.h>
const int maxn = 100010;
bool hashTable[maxn] = {false};
int main(){
	int n,m ,x;
	scanf("%d%d",&n,&m);
	for(int i = 0;i<n;i++){
		scanf("%d",&x);
		hashTable[x] = true;
	}
	for (int i=0;i<m;i++){
		scanf("%d",&x);
		if(hashTable[x] == true){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}
	return 0; 
	
	
	
	
}  
