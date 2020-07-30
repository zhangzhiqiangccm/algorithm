/*�鲢���� �ݹ�ʵ��*/
const int maxn = 100;
//������A�ġ�L1��R1������L2��R2���ϲ����������䣬����L2 = L1+1
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
	//���ϲ��������temp[index]�Ż�ԭ����A
	for(i = 0;i<index;i++){
		A[L1 +i] = temp[i];
	} 	
} 

//��array���鵱ǰ����[left,right]���й鲢����
void mergeSort(int A[],int left,int right){
	if(left<right){
		int mid = (left+right)/2;
		mergeSort(A,left,mid);
		mergeSort(A,mid+1,right);
		merge(A,left,mid,mid+1,right);
	}
} 



 
