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
	cout<<"max="<<cell[N][M]<<endl;
	return 0;
};
int max(int a,int b,int c) {
	if(a>b){
		if(a>c)return a;
		else return c;
	}
	else{
		if(b>c)return b;
		else return c;
	}
};
void dynamic(int N,int M) {
	int i,j,tmp,rest1,rest2;
	for(i=1; i<=N; i++) {
		for(j=1; j<=M; j++) {
			if(j>=w[i]){
				tmp=j/w[i];
				rest1=cell[i-1][j-w[i]]+v[i];//װһ������Ʒ
				rest2=cell[i-1][j-tmp*w[i]]+tmp*v[i];//װ�༸�� 
				 
			}
			else rest1=rest2=0;
			cell[i][j]=max(cell[i-1][j],rest1,rest2);
			//�Ƚ���һ����񱳰��ļ�ֵ��װ�µ�ǰ��Ʒ�ļ�ֵ
			//��װ�༸��������Ʒ 
		}
	};

};
