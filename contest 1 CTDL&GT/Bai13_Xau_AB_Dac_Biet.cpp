#include<iostream>
using namespace std;
int n,k;
char a[100];
bool OK=true;
int count=0;
string s[10000];
bool check(){
	int d=0,t=1;
	for(int i=1;i<n;i++){
		if(a[i]=='A'&&a[i+1]=='A'){
			t++;
			if(t>=k) d++;
		}
		else t=1;
	}
	if(d==1) return true;
		return false;
}
void dem(){
	if(check()){
		s[count]="";
		for(int i=1;i<=n;i++){
			s[count]+=a[i];
			
		}
		count++;
	}
}
void sinh(){
	int i=n;
	while(i>0&&a[i]!='A'){
		a[i]='A';
		i--;
	}
	if(i>0){
		a[i]='B';
	}
	else OK=false;
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		a[i]='A';
	}
	while(OK){
		sinh();
		dem();
	}
	cout<<count<<endl;
		for(int i=0;i<count;i++){
			cout<<s[i]<<endl;
		}
}

