/*ѡ��������򵥵�����֮һ�����Ӷ�ΪO��n^2�� 
           �ҵ������ÿ�ΰѴ����������е���С��Ԫ�ط��ڴ���������ǰ��ȥ�� 
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
