/*
上一个问题中,如果要求M个待查询的数中每个数在N个数中出现的次数，那么可以把hashTable数组替换成Int型，
然后在输入N个数时进行预处理，即当输入的数为x时，就令hashTable[x]++。 
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
