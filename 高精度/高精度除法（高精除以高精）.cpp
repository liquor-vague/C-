#include<bits/stdc++.h>
using namespace std;
int a[1005],b[1005],c[1005],temp[1005];
char s1[1005],s2[1005];
int compare(int a[],int b[]);
void numcpy(int a[],int b[],int displace);

int main() {
	int count=0,rest;
	int i,j,la,lb;
	//�����ַ���
	cin>>s1>>s2;
	//�洢�ַ�������
	la=strlen(s1);
	a[0]=la;
	lb=strlen(s2);
	b[0]=lb;
	//�������
	for(i=1; i<=la; i++) {
		a[i]=s1[la-i]-'0';
	};
	for(j=1; j<=lb; j++) {
		b[j]=s2[lb-j]-'0';
	};
	//������� 
	if(0==compare(a,b)) {
		printf("1\n0\n") ;
		return 0;
	} 
	//�������ڱ����� 
	else if(-1==compare(a,b)) {
		printf("0\n%");//�������
		printf("%s\n", s1);
		return 0;
	} 
	else {
		c[0]=a[0]-b[0]+1;
		for(i=c[0]; i>0; i--) {
			memset(temp, 0, sizeof(temp));//��temp�е�Ԫ��ȫ��ʼ��
			//��λ����
			numcpy(b,temp,i);
			//�ø߾���ģ��ÿ������
			while(compare(a,temp)>=0) {
				c[i]++;
				for(j=1; j<=a[0]; j++) {
					if(a[j]<temp[j]) {
						a[j+1]--;
						a[j]+=10;
					};
					a[j]-=temp[j];
				}
				//ɾ��ѭ����������0��λ��
				int k=a[0];
				while(a[k]==0)k--;
				a[0]=k;
			}
		}
		//ɾ���ȵ�0
		while(c[c[0]]==0&&c[0]>0) c[0]--;
		//�����ӡ����̺�����
		for (int i=c[0]; i>0; i--) {
			printf("%d", c[i]);//��
		}
		printf("\n");
		//����
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
//�Ƚϱ������ͳ�����С
int compare(int a[],int b[]) {
	//����0������鳤��
	if(a[0]>b[0]) return 1;
	else if(a[0]<b[0])return -1;
	//��λ�Ƚ�
	for(int i=a[0]+b[0]; i>0; i--) {
		if(a[i]>b[i])return 1;
		else if(a[i]<b[i])return -1;
	};
	return 0;
};
//��λ����
void numcpy(int a[],int b[],int displace) {
	for (int i=1; i<=a[0]; i++) {
		b[i+displace-1] =a[i];
	}
	b[0] = a[0]+displace-1;

};
