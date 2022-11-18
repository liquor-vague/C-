//µÝ¹é¸ü·½±ã 
#include<bits/stdc++.h>
using namespace std;;
int factor(int a,int b,int tmp) {
	tmp=a%b;
	if(tmp==0)return b;
	else return factor(b,tmp,0);
};
int main() {
	int x1,x2,change,outcome;
	cin>>x1>>x2;
	if(x1<x2) {
		change=x1;
		x1=x2;
		x2=change;
	};
	outcome=factor(x1,x2,0);
	cout<<outcome;
	return 0;
}
