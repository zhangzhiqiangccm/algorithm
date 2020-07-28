/*�����������A�е�Ԫ�ؿ��ظ�����ô��β��ҳ���һ����x��Ԫ��
  �����һ����x��Ԫ�ص�λ��ΪL����һ������x��Ԫ��λ��ΪR 
  ��ô��ʵx��λ�þ�������[L,R) 
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




