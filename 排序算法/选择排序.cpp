//选择排序（Selection sort），时间复杂度O(n^2)
/*工作原理:
第一次从待排序的数据元素中选出最小（或最大）的一个元素，存放在序列的起始位置，
然后再从剩余的未排序元素中寻找到最小（大）元素，然后放到已排序的序列的末尾。
以此类推，直到全部待排序的数据元素的个数为零。*/
#include<iostream>
using namespace std;
//选择排序 
static int  selection(int*arr,int n){
	int i,j,max;
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			max=arr[j]>arr[j+1]?arr[j]:arr[j+1];
		}
	};
	return max;
}
int main(){
	int n,i,biggest;
	cin>>n;//输入数组元素个数 
	int array[n];
	for(i=0;i<n;i++){
		cin>>array[i]; //输入数组元素 
	};
	biggest=selection(array,n);
	cout<<biggest<<endl;//输出最大数 
	return 0;
} 
