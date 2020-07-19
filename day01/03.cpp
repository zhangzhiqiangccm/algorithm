/*
问题描述：输入一个数n（1<=n<=200），然后输入n个数值各不相同的数，        
          再输入一个值x，输出这个值在数组中的下标，如果不在数组中返回-1 
*/

/*
思路：一个数组来存这些数，然后查找数组中的元素 
*/
# include <cstdio>
const int maxn = 210;
int a[maxn];
int main(){
	int n,x;
	while(scanf("%d",&n) != EOF){
		for(int i=0;i<n ;i++){
			scanf("%d",&a[i]);
		}
		scanf("%d",&x);
		int k;
		for(k=0;k<n;k++){
			if (a[k] == x ){
				printf("%d",k);
				break;
			}
		}
		if(k ==n){
			printf("-1\n");
		}
	}
	return 0;
} 
