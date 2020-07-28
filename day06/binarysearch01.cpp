/*如果递增序列A中的元素可重复，那么如何查找出第一个是x的元素
  假设第一个是x的元素的位置为L，第一个大于x的元素位置为R 
  那么其实x的位置就是区间[L,R) 
*/
int lower_bound(int A[],int left,int right,int x){
	int mid;
	while(left<right){
		mid = (right+left)/2;
		if(A[mid] >=x){
			right = mid;
		}else{
			left = mid+1;
		}
	}
	return left;
}

int upper_bound(int A[],int left,int right,int x){
	int mid;
	while(left<right){
		mid = (left+right)/2;
		if(A[mid] >x){
			right = mid;
		}else{
			left = mid +1;
		}
	}
	return left;
}




