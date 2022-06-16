#include<bits/stdc++.h>
using namespace std;
int t,n,k;
int a[20],b[20];
bool OK;
void in(){
int c[20],m=0,tong=0;
for(int i=0;i<n;i++){
	tong+=a[i]*b[i];
}
if(tong==k){
	OK=true;
   for(int i=0;i<n;i++){
   	 if(b[i]){
   		c[m]=a[i];
   		m++;
	   }
    }
   cout<<"[";
   for(int i=0;i<m-1;i++){
   	cout<<c[i]<<" ";
    }
   cout<<c[m-1]<<"] ";
  }	
}
void Try(int i){
	for(int j=1;j>=0;j--){
		b[i]=j;
		if(i==n-1) in();
		else Try(i+1);
	}
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		OK=false;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		Try(0);
		if(OK==false) cout<<-1;
		cout<<endl;
	}

}

