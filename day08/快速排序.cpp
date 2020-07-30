/*快速排序*/
//使用主元A[left]，将数组中小于主元的放到其左边，大于主元的放到其右边
int Partition(int A[] ,int left,int right){
	int temp = A[left];//先把A[left]存到临时变量中
	while(left < right){
		while(left<right&&A[left] <= temp) left++;
		A[right] = A[left];
		while(left<right&&A[right] >temp) right--;
		A[left ] = A[right];
	} 
	A[left] = temp;//相遇了，把temp值放到相遇的地方
	return left; 
} 
void quickSort(int A[] ,int left,int right){
	if(left<right){     //也就是说区间的长度超过1 
		int pos = Partition(A,left,right);
		quickSort(A,left,pos-1);
		quickSort(A,pos+1,right); 
	}
}
