/*��������*/
//ʹ����ԪA[left]����������С����Ԫ�ķŵ�����ߣ�������Ԫ�ķŵ����ұ�
int Partition(int A[] ,int left,int right){
	int temp = A[left];//�Ȱ�A[left]�浽��ʱ������
	while(left < right){
		while(left<right&&A[left] <= temp) left++;
		A[right] = A[left];
		while(left<right&&A[right] >temp) right--;
		A[left ] = A[right];
	} 
	A[left] = temp;//�����ˣ���tempֵ�ŵ������ĵط�
	return left; 
} 
void quickSort(int A[] ,int left,int right){
	if(left<right){     //Ҳ����˵����ĳ��ȳ���1 
		int pos = Partition(A,left,right);
		quickSort(A,left,pos-1);
		quickSort(A,pos+1,right); 
	}
}
