/*
��������������һ����n��1<=n<=200����Ȼ������n����ֵ������ͬ������        
          ������һ��ֵx��������ֵ�������е��±꣬������������з���-1 
*/

/*
˼·��һ������������Щ����Ȼ����������е�Ԫ�� 
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
