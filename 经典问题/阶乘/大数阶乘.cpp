//�����׳��ǽ����ڴ����ӷ��Ļ�����
#include<bits/stdc++.h>
using namespace std;
int a[100000];//�����鲻Ҫ��С�� 
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
			if(up>0&&j==len)len++;//��ȷ������λ�������ⳬʱ 
		}
	};
	while(0==a[len]&&len>0)len--;
	for(i=len;i>0;i--)cout<<a[i];
	return 0;
}
