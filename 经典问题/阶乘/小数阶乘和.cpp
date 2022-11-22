//小数阶乘之和（数字小于100）
//大数加法的嵌套使用
#include<iostream>
#include<string.h>
using namespace std;
int a[100],b[100];
int main() {
	int n,x=1;
	int temp,up,len;
	int i,j;
	cin>>n;
	while(x<=n) {
		//注意memset是以字节为单位赋值的
		//此处不能写成memset(a,0,100),否则只会对前100个字节赋值 
		memset(a,0,sizeof(a));  
		a[1]=1;
		len=1;
		//求n阶阶乘
		for(i=1; i<=x; i++) {
			for(j=1,up=0; j<=len; j++) {
				temp=a[j]*i+up;
				a[j]=temp%10;
				up=temp/10;
				if(up>0&&j==len)len++;//精确计算结果位数，避免超时
			}
		};
		/*输出每次阶乘值
			while(0==a[len]&&len>0)len--;
			for(i=len;i>0; i--)cout<<a[i];
			cout<<endl;
		*/
		
		//求和
		for(i=1,up=0; i<=len; i++) {
			b[i]+=a[i];
			up=b[i]/10;
			b[i+1]+=up;
			b[i]=b[i]%10;
			if(up>0&&i==len)len++;
		}
		x++;
	};
	while(0==b[len]&&len>0)len--;
	for(i=len; i>0; i--)cout<<b[i];
	return 0;
}
