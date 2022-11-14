//只能大减小，而且只能两个整数相减 
#include<bits/stdc++.h>
using namespace std;
char s1[1005],s2[1005],s3[1005];
int a[1005],b[1005],c[1005];
//比较两个数字的大小
int compare(char s1[],char s2[],int x1,int x2) {
	if(x1!=x2)return x1>x2;
	else {
		for(int i=0; i<x1; i++) {
			if(s1[i]!=s2[i])return s1[i]>s2[i];
		};
	};
}
int main() {
	int la,lb,lc;
	int i,j,flag;
	scanf("%s",s1);
	scanf("%s",s2);
	la=strlen(s1);
	lb=strlen(s2);
	flag=compare(s1,s2,la,lb);//正数返回1，负数返回0
	//若为负数，则进行交换
	if(flag==0) {
		strcpy(s3,s1);//即将s1复制到s3
		strcpy(s1,s2);
		strcpy(s2,s3);
		lc=la;
		la=lb;
		lb=lc;
	} ;
	//转字符为数字，将每个数各位上的数字存入数组
	for(i=0; i<la; i++) {
		a[la-i]=s1[i]-'0';
	} ;
	for(j=0; j<lb; j++){
		b[lb-j]=s2[j]-'0';
	}; 

	for(i=0; i<la+1; i++) {
		if(a[i]<b[i]) {
			a[i]+=10;
			a[i+1]--;
		}
		c[i]=a[i]-b[i];
	};
	while(c[la]==0&&la>0)la--;
//打印数字
	if(flag==0)printf("-");
	for(i=la; i>0; i--) {
		printf("%d",c[i]);
	};
}
