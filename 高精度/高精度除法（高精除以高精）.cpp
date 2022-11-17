#include<bits/stdc++.h>
using namespace std;
int a[1005],b[1005],c[1005],temp[1005];
char s1[1005],s2[1005];
int compare(int a[],int b[]);
void numcpy(int a[],int b[],int displace);

int main() {
	int count=0,rest;
	int i,j,la,lb;
	//输入字符串
	cin>>s1>>s2;
	//存储字符串长度
	la=strlen(s1);
	a[0]=la;
	lb=strlen(s2);
	b[0]=lb;
	//倒序存数
	for(i=1; i<=la; i++) {
		a[i]=s1[la-i]-'0';
	};
	for(j=1; j<=lb; j++) {
		b[j]=s2[lb-j]-'0';
	};
	//两数相等 
	if(0==compare(a,b)) {
		printf("1\n0\n") ;
		return 0;
	} 
	//除数大于被除数 
	else if(-1==compare(a,b)) {
		printf("0\n%");//输出除数
		printf("%s\n", s1);
		return 0;
	} 
	else {
		c[0]=a[0]-b[0]+1;
		for(i=c[0]; i>0; i--) {
			memset(temp, 0, sizeof(temp));//将temp中的元素全初始化
			//高位对齐
			numcpy(b,temp,i);
			//用高精减模拟每次运算
			while(compare(a,temp)>=0) {
				c[i]++;
				for(j=1; j<=a[0]; j++) {
					if(a[j]<temp[j]) {
						a[j+1]--;
						a[j]+=10;
					};
					a[j]-=temp[j];
				}
				//删掉循环结束后变成0的位数
				int k=a[0];
				while(a[k]==0)k--;
				a[0]=k;
			}
		}
		//删除先导0
		while(c[c[0]]==0&&c[0]>0) c[0]--;
		//逆序打印输出商和余数
		for (int i=c[0]; i>0; i--) {
			printf("%d", c[i]);//商
		}
		printf("\n");
		//余数
		if (0==a[0]) {
			printf("0\n");
		} else {
			for (int i=a[0]; i>0; i--) {
				printf("%d", a[i]);
			}
			printf("\n");
		}
	};

	return 0;
};
//比较被除数和除数大小
int compare(int a[],int b[]) {
	//索引0存放数组长度
	if(a[0]>b[0]) return 1;
	else if(a[0]<b[0])return -1;
	//逐位比较
	for(int i=a[0]+b[0]; i>0; i--) {
		if(a[i]>b[i])return 1;
		else if(a[i]<b[i])return -1;
	};
	return 0;
};
//高位对齐
void numcpy(int a[],int b[],int displace) {
	for (int i=1; i<=a[0]; i++) {
		b[i+displace-1] =a[i];
	}
	b[0] = a[0]+displace-1;

};
