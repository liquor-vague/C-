//��������(Insertion sort)��ʱ�临�Ӷ�O(n^2)

/*
����һ���������е�һ��Ԫ�ؿ���һ���������У��ѵڶ���Ԫ�ص����һ��Ԫ�ص�����δ�������С�
��ͷ��β����ɨ��δ�������У���ɨ�赽��ÿ��Ԫ�ز����������е��ʵ�λ�á�
������������Ԫ�������������е�ĳ��Ԫ����ȣ��򽫴�����Ԫ�ز��뵽���Ԫ�صĺ��档��
*/

#include<iostream>
using namespace std;
int insertion(int*arr,int n) {
	int i,j,temp;
	//��������
	for(i=1; i<n; i++) {
		temp=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>temp) {
			arr[j+1]=arr[j];
			j--;
		};
		arr[j+1]=temp;
	};
	//��ӡ
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<'\t';
	};
};

int main() {
	int n,i;
	cin>>n;//��������Ԫ�ظ��� 
	int array[n];
	for(i=0; i<n; i++) {
		cin>>array[i];//��������Ԫ�� 
	};
	insertion(array,n);
	return 0;
}
