//高精度除法（高精度除以低精度） 
#include<bits/stdc++.h>
using namespace std;
int a[1005],c[1005];
char s1[1005];
int main(){
	int la,lb,b=0,rest;
	int i,j;
	cin>>s1>>b;
	la=strlen(s1);
	for(i=1;i<=la;i++){
		a[i]=s1[la-i]-'0';//倒序存数
	};
	/*
	for(i=j;j<=lb;j++){
		b[j]=s2[la-j]-'0';
		b2+=b[j]*pow(10,j-1);//提取小除数 
	};
	*/
	//模拟每次除法
	for(i=la;i>0;i--){
		if(a[i]>=b){
		c[i]=a[i]/b;
		rest=a[i]%b;
		a[i-1]+=rest*10;
		}
		else{
		a[i-1]+=a[i]*10;
		};
	};
	while(c[la]==0&&la>0)la--;
	for(i=la;i>0;i--){
		cout<<c[i];
	};
	cout<<endl;
	cout<<rest;
	return 0;
} 
