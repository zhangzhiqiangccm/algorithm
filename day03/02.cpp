/*插入排序，简单来说就是把未排序区域从前往后的元素一个个插入到已排序的大小对应位置中去 
*/
int A[maxn],n;
void insertSort(){
	for(int i=2;i<=n;i++){                  //一共n-1趟循环 
		int temp = A[i],j=i;                //temp先把A[i]存起来，这是要插入的值，j先放i的位置 
		while(j>1&&temp<A[j-1]){            // 比较j之前的位置和temp的大小 
			A[j] = A[j-1];                  //如果temp的值比A[j-1]的值小，就把A[j-1]往后挪一位到A[j]位置 
			j--;         
		}
		A[j] = temp; //此时temp的值比A[j-1]的值大，也就不需要移动A[j-1]的值，把temp值给A[j]就可以了 
	}
} 
