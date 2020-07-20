/*
问题描述：回文串：正向读反向读是一样的字符串。
输入格式：一个字符串，长度不超过255
输出格式：如果是回文串，返回yes，不是的话返回no 
*/
# include <cstdio>
# include <cstring>
const int maxn = 256;

bool judge(char str[]){
	int len = strlen(str); //字符串长度
	for(int i = 0;i<len/2;i++){
		if(str[i] != str[len-1-i]) {
			return false;
		}
	} 
	return true;
}

int main(){
	char str[maxn];
	while(gets(str)){
		bool flag = judge(str);
		if(flag == true){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}	
	
	
	
	
	return 0;
}
