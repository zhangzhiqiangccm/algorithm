/*��������ʹ�ö��ַ�����x*/
#include<stdio.h>
//A[]���ϸ�ĵ������У�Left�Ƕ����½磬right�Ƕ����Ͻ죬x������ѯ����
//�������������ұ�����Ϊ[left,right]������ĳ�ֵΪ[0,n-1]
int binarysearch(int A[],int left,int right,int x){
	int mid;
	while(left<=right){
		mid = (left+right)/2;
		if(A[mid] == x) return mid;
		else if (A[mid] >x){
			right = mid-1;
		}else{
			left = mid+1;
		}
	}
	return -1;
} 

int main(){
	const int n = 18;
	int A[n] = {1,2,3,4,5,6,7,8,9,10,13,15,28,37,49,67,89,93};
	printf("%d %d\n",binarysearch(A,0,n-1,6),binarysearch(A,0,n-1,72));
	return 0;
	
	
	
}
