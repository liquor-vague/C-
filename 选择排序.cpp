//ѡ������Selection sort����ʱ�临�Ӷ�O(n^2)
/*����ԭ��:
��һ�δӴ����������Ԫ����ѡ����С������󣩵�һ��Ԫ�أ���������е���ʼλ�ã�
Ȼ���ٴ�ʣ���δ����Ԫ����Ѱ�ҵ���С����Ԫ�أ�Ȼ��ŵ�����������е�ĩβ��
�Դ����ƣ�ֱ��ȫ�������������Ԫ�صĸ���Ϊ�㡣*/
#include<iostream>
using namespace std;
//ѡ������ 
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
	cin>>n;//��������Ԫ�ظ��� 
	int array[n];
	for(i=0;i<n;i++){
		cin>>array[i]; //��������Ԫ�� 
	};
	biggest=selection(array,n);
	cout<<biggest<<endl;//�������� 
	return 0;
} 
