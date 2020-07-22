/*
字符串hash，将字符串S映射成一个整数，使得该整数可以尽可能唯一地代表字符串。
为了讨论方便，假设字符串是26个大写字母构成，对应0-25，这样我们将其变成26进制
然后转化为十进制，这样就可以唯一表示了。 
*/
int hashFunc(char S[],int len){
	int id = 0;
	for(int i=0;i<len;i++){
		id = id*26+(S[i] - 'A');
	}
	return id;
} 

/*
如果有小写字母，则把A-Z看作0-25，a-z看作26-51.然后把52进制转换成10进制 
*/
int hashFunc(char S[],int len){
	int id =0;
	for(int i = 0;i<len;i++){
		if(S[i]>='A'&&S[i] <='Z'){
			id = id*52 + (S[i] - 'A');
		}else if(S[i] >= 'a'&&S[i] <='z'){
			id = id*52 + (S[i] - 'a') +26;
		}
	}
	return id;
} 
 /*
 如果有数字，那就从62进制转换 
 */
