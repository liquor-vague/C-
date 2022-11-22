#include<bits/stdc++.h>
using namespace std;
long fac(int);
int main(){
	int n;
	long y;
	cin>>n;
	y=fac(n);
	cout<<y;
	return 0;
};
long fac(int n){
	if(1==n||0==1)return 1;
	else return fac(n-1)*n;
};
