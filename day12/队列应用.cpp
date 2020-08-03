//有序表的最小和
//第一行输入两个有序表长度n，第二行第三行分别是两个有序表的元素递增，中间空格分开元素
//思路：使用堆来维护，堆中始终保持n个元素，每次取出堆中最小的元素
# include<bits/stdc++.h>
# define maxn 400000
using namespace std;
struct num{
	int data ,value;
	bool operator <(const num x) ;
    return value >x.value;
};  

priority_queue <num> q;
int a[maxn+1] ,b[maxn +1],n,c[maxn+1];
int main(){
	freopen("element.in","r",stdin);
	freopen("element.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;++i) scanf("%d",&a[i]);
	for(int i=1;i<=n;++i) scanf("%d",&b[i]);
	for(int i=1;i<=n;++i){
		c[i] =2;
		num tmp;
		tmp.value = a[i] +b[1];
		tmp.data = i;
		q.push(tmp);
	}
	for(int i=1;i<=n;++i){
		num tmp = q.top();
		q.pop();
		printf("%d\n",tmp.value);
		tmp.value = a[tmp.value] + b[ c[tmp.data]++ ];
		q.push(tmp);
	}
	return 0;
}
 
