#include<iostream>
using namespace std;
int cell[35][205],v[35],w[35];//cell��������v������Ʒ��ֵ��w������Ʒ����
int max(int a,int b);
void sort(int N);
void dynamic(int N,int M);
int main() {
	int M,N;
	int i,j;
	//��������
	cin>>M>>N;
	for(i=1; i<=N; i++) {
		cin>>w[i]>>v[i];
	};
	//��̬�滮
	dynamic(N,M);
	//�����ѹ滮
	cout<<cell[N][M]<<endl;
	return 0;
};
int max(int a,int b) {
	return a>b?a:b;
};
void dynamic(int N,int M) {
	int i,j,tmp,rest;
	for(i=1; i<=N; i++) {
		for(j=1; j<=M; j++) {
			tmp=j;
			if(j>=w[i])rest=cell[i-1][j-w[i]]+v[i];
			else rest=0;
			cell[i][j]=max(cell[i-1][j],rest);
			//�Ƚ���һ����񱳰��ļ�ֵ��װ�µ�ǰ��Ʒ�ļ�ֵ
		}
	};

};
