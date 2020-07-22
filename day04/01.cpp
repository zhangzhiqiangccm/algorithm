/*
问题：给出N个正整数，再给出M个正整数，问这M个数中的每个数是否在N中出现过。如果一次次查询，
      那么整个时间复杂度会很高，O（MN），所以不妨空间换时间，设定一个bool型数组hashTable，其中
	  hashTable[x]为true时，表示M中的数在N中出现过，反之未出现。hashTable开始要全部初始化为false；
	  也就是初始状态下都未出现过。这样一开始读入N个 正整数的时候就可以预处理，当读入的数为x时，令
	  hashTable[x] 为true。这样对于M个待查询的数，可以直接通过hashTable数组来判断每个数是否都出现过。 

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
