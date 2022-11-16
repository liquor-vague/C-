//高精度乘法,只能两个正数相乘
#include<bits/stdc++.h>
using namespace std;
int a[1005],b[1005],c[2010];
//开数组注意，c的位数为（a+b)，因为两个数积的位数不大于两个数的位数之和 
char s1[1005],s2[1005];
int main() {
	int la,lb,lc;
	int i,j,carry;
	scanf("%s",s1);
	scanf("%s",s2);
	la=strlen(s1);
	lb=strlen(s2);
	//提取第一个数
	for(i=1; i<=la; i++) {
		a[i]=s1[la-i]-'0';
	};
	//提取第二个数
	for(j=1; j<=lb; j++) {
		b[j]=s2[lb-j]-'0';
	};
	//乘法 
	for(i=1; i<=la; i++) {
		carry=0;
		//模拟每一次竖式计算 
		for(j=1; j<=lb; j++) {
			c[i+j-1]=a[i]*b[j]+carry+c[i+j-1];
			carry=c[i+j-1]/10;
			c[i+j-1]=c[i+j-1]%10;
		}
		c[lb+i]+=carry;
	};
	lc=la+lb;
	//删去先导0 
	while(c[lc]==0&&lc>0)lc--;
	//打印结果 
	for(i=lc; i>0; i--) {
		printf("%d",c[i]);
	}
	return 0;
}
