/*vectorӦ�ã����ζ����������������������������������м���Ǹ���
  ���������м������ĺ͡���0��Ϊ������־����0������*/
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
	a.pop_back(); //ɾ��ĩβ��0
	if(a.size() %2 ==1) printf("%d\n",a[a.size()/2]);
	else printf("%d\n",a[(a.size()-1)/2] +a[a.size()/2]);
	return 0;
}
