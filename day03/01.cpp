/*选择排序，最简单的排序之一；复杂度为O（n^2） 
           我的理解是每次把待排序区域中的最小的元素放在待排序序列前面去。 
*/
void selectSort(){
	int n;
	int A[10000];
	for(int i=1;i<n+1;i++){
		int k = i;
		for(int j = i;j<=n;j++){
			if(A[j] <A[k]){
				k = j;
			}
		}
		int temp = A[i];
		A[i] = A[k];
		A[k] = temp;
		
	}
	
	
	
}
