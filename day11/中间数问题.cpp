/*vector应用：依次读入若干正整数，如果是奇数个就输出最中间的那个数
  否则就输出中间两数的和。以0作为结束标志，但0不计数*/
# include<bits/stdc++.h>
# include <vector>
using namespace std; 
int main(){
	vector<int> a;
	int t,i = 0;
	do{
		scanf("%d",&t);
		a.push_back(t);
	}while(t !=0);
	a.pop_back(); //删除末尾的0
	if(a.size() %2 ==1) printf("%d\n",a[a.size()/2]);
	else printf("%d\n",a[(a.size()-1)/2] +a[a.size()/2]);
	return 0;
}
