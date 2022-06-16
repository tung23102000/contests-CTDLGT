#include<bits/stdc++.h>
using namespace std;
int t,n=8;
int tong;
int a[11][11],b[11];
bool cot[11],dcxuoi[22],dcnguoc[22];
void init(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
		   cin>>a[i][j];
	
	}
	for(int i=0;i<11;i++) cot[i]=true;
	for(int i=0;i<22;i++){
		dcxuoi[i]=true; //chua bi chieu
		dcnguoc[i]=true; //chua bi chieu
	}
	tong=0;
	
}
void process(){
	int temp=0;
	for(int i=1;i<=n;i++){
		temp+=a[i][b[i]];
		tong=max(temp,tong);
	}
	
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(cot[j]&&dcxuoi[i-j+n]&&dcnguoc[i+j-1]){
			b[i]=j;
			cot[j]=false;
			dcxuoi[i-j+n]=false;
			dcnguoc[i+j-1]=false;
			if(i==n) process();
			else Try(i+1);
			cot[j]=true;
			dcxuoi[i-j+n]=true;
			dcnguoc[i+j-1]=true;
		}
	}
}
int main(){
	cin>>t;
	while(t--){
		init();
		Try(1);
		cout<<tong;
		cout<<endl;
	}

}

