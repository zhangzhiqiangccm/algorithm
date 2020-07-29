/*双指针 递增序列求两数之和*/
while(i<j){
	if(a[i] + a[j] ==m) {
		printf("%d%d",i,j);
		i++;
		j--;
	}else if(a[i] +a[j] <m){
		i++;
	}else{
		j--;
	}
	
	
	
	
} 

