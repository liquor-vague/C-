#include<iostream>
#include<cmath>
using namespace std;
char str[105];
int a[30];
int compare(char*str){
	int i;
	for(i=0;'\0'!=str[i];i++){
		a[str[i]-'a']++;
	};
	int max=a[0],min=100;
	int temp;
	for(i=0;i<26;i++){
		if(a[i]>max)max=a[i];
		if(a[i]<min&&a[i]!=0)min=a[i];
	};
	return max-min;
};
int prime(int x){
	if(x==0||x==1)return 0;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0)return 0;
	}
	return x;
};
int main(){
	cin>>str;
	int back=compare(str);
	int back2=prime(back);
	if(back2==0){
		cout<<"No Answer"<<endl;
		cout<<"0";
	}
	else{
		cout<<"Lucky Word"<<endl;
		cout<<back2;
	};
	return 0;
} 
