/* sinh to hop chap i cua n, voi i chay tu 1 den n,voi i bang bao nhieu ma tong cac to tien tu 1 den i bang s thi in ra i*/
#include<bits/stdc++.h>
using namespace std;
int n,s;
bool OK=true;
int kq=0;
void sinh(int a[],int i){
	int j=i;
	while(j>0&&a[j]==n-i+j) j--;
	if(j>0){
		a[j]=a[j]+1;
		for(int m=j+1;m<=i;m++) a[m]=a[j]+m-j;
	}
	else OK=false;
}
int tong(int x[],int a[],int i){
	int h=0;
	for(int j=1;j<=i;j++) h+=a[x[j]];
	return h;
}
int process(int x[],int a[],int i){
	for(int j=1;j<=i;j++) x[j]=j;
	while(OK){
		if(tong(x,a,i)==s) return i;
		else sinh(x,i);
	}
}
int main(){
	    cin>>n>>s;
	    int a[n],x[n];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			if(process(x,a,i)){
				cout<<process(x,a,i)<<endl;
				kq=1;
				break;
			}
			OK=true;
			
		}
		if(kq==0) cout<<-1<<endl;
	
}

