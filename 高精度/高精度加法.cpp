//�߾��ȼӷ�
#include<bits/stdc++.h>
using namespace std;
char s1[505],s2[505];
int a[505],b[505],c[505];
//max���� 
int max(int a,int b){
	if(a>b)return a;
	else return b;
};
int main() {
	int la,lb,lc;
	int i,j;
	scanf("%s",s1);//��s1[0]��ʼ���� 
	scanf("%s",s2);
	la=strlen(s1);//���ַ������� 
	lb=strlen(s2);
	for(i =1; i<=la; i++) {
		a[i]=s1[la-i]-'0';//���ַ�תΪ���� 
	};
	for(j=1; j<=lb; j++) {
		b[j]=s2[lb-j]-'0';//���ַ�תΪ���� 
	};
	lc=max(la,lb)+1;
	for(i=1;i<=lc;i++){
		c[i]+=a[i]+b[i];
		c[i+1]=c[i]/10;
		c[i]=c[i]%10;
	};
	if(c[lc]==0&&lc>0)lc--;//ɾ���ȵ�0 
	for(i=lc;i>0;i--){
		printf("%d",c[i]);
	} ;
	return 0;
}
