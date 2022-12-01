#include<iostream>
using namespace std;
int cell[35][205],v[35],w[35];//cell代表背包，v代表物品价值，w代表物品重量
int max(int a,int b);
void sort(int N);
void dynamic(int N,int M);
int main() {
	int M,N;
	int i,j;
	//输入数据
	cin>>M>>N;
	for(i=1; i<=N; i++) {
		cin>>w[i]>>v[i];
	};
	//动态规划
	dynamic(N,M);
	//输出最佳规划
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
			//比较上一行这格背包的价值和装下当前物品的价值
		}
	};

};
