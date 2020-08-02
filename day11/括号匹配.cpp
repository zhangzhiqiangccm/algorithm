//stack应用：括号匹配问题 
# include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("match.in","r",stdin);
	freopen("match.out","w",stdout);
	stack<char> st;
	bool judge = true;
	char ch;
	do{
		ch = getchar();
		if(ch =='(') st.push(ch);
		else if(ch ==')'){
			if(!st.empty()) st.pop();
			else{
				judge = false;
				break;
			}
		}
	}while(ch !='@');
	if(!st.empty()) judge = false;
	if(judge) printf("YES\n");
	else printf("No\n");
	return 0;
} 
