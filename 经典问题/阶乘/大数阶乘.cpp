//大数阶乘是建立在大数加法的基础上
#include<bits/stdc++.h>
using namespace std;
int a[100000];//开数组不要开小了 
int main() {
	int n,temp,up,len=1;
	int i,j;
	a[1]=1;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1,up=0;j<=len;j++){
			temp=a[j]*i+up;
			a[j]=temp%10;
			up=temp/10;
			if(up>0&&j==len)len++;//精确计算结果位数，避免超时 
		}
	};
	while(0==a[len]&&len>0)len--;
	for(i=len;i>0;i--)cout<<a[i];
	return 0;
}
