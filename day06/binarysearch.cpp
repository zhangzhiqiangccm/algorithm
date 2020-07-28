/*增序列中使用二分法查找x*/
#include<stdio.h>
//A[]是严格的递增序列，Left是二分下界，right是二分上届，x是欲查询的数
//二分区间的左闭右闭区间为[left,right]，传入的初值为[0,n-1]
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
