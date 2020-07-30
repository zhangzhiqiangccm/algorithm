/*归并排序 递归实现*/
const int maxn = 100;
//将数组A的【L1，R1】，【L2，R2】合并成有序区间，其中L2 = L1+1
void merge(int A[],int L1,int R1,int L2,int R2){
	int i = L1,j = L2;
	int temp[maxn] ,index = 0;
	while(i<=R1&&j<=R2){
		if(A[i] < A[j]){
			temp[index++] = A[i++];
		}else{
			temp[index++] = A[j++];
		}
		
	}
	while(i <= R1) temp[index++] = A[i++];
	while(j<= R2) temp[index++] = A[j++];
	//将合并后的数组temp[index]放回原数组A
	for(i = 0;i<index;i++){
		A[L1 +i] = temp[i];
	} 	
} 

//将array数组当前区间[left,right]进行归并排序
void mergeSort(int A[],int left,int right){
	if(left<right){
		int mid = (left+right)/2;
		mergeSort(A,left,mid);
		mergeSort(A,mid+1,right);
		merge(A,left,mid,mid+1,right);
	}
} 



 
