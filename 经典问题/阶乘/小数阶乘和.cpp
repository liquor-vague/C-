//С���׳�֮�ͣ�����С��100��
//�����ӷ���Ƕ��ʹ��
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
		//ע��memset�����ֽ�Ϊ��λ��ֵ��
		//�˴�����д��memset(a,0,100),����ֻ���ǰ100���ֽڸ�ֵ 
		memset(a,0,sizeof(a));  
		a[1]=1;
		len=1;
		//��n�׽׳�
		for(i=1; i<=x; i++) {
			for(j=1,up=0; j<=len; j++) {
				temp=a[j]*i+up;
				a[j]=temp%10;
				up=temp/10;
				if(up>0&&j==len)len++;//��ȷ������λ�������ⳬʱ
			}
		};
		/*���ÿ�ν׳�ֵ
			while(0==a[len]&&len>0)len--;
			for(i=len;i>0; i--)cout<<a[i];
			cout<<endl;
		*/
		
		//���
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
