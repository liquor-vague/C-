//插入排序(Insertion sort)，时间复杂度O(n^2)

/*
将第一待排序序列第一个元素看做一个有序序列，把第二个元素到最后一个元素当成是未排序序列。
从头到尾依次扫描未排序序列，将扫描到的每个元素插入有序序列的适当位置。
（如果待插入的元素与有序序列中的某个元素相等，则将待插入元素插入到相等元素的后面。）
*/

#include<iostream>
using namespace std;
int insertion(int*arr,int n) {
	int i,j,temp;
	//插入排序
	for(i=1; i<n; i++) {
		temp=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>temp) {
			arr[j+1]=arr[j];
			j--;
		};
		arr[j+1]=temp;
	};
	//打印
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<'\t';
	};
};

int main() {
	int n,i;
	cin>>n;//输入数组元素个数 
	int array[n];
	for(i=0; i<n; i++) {
		cin>>array[i];//输入数组元素 
	};
	insertion(array,n);
	return 0;
}
