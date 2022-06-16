#include<bits/stdc++.h>
using namespace std;
int t,n,k,ok;
int a[20],b[20];
vector< vector<int> > res;
void nhap(){
	   	cin>>n>>k;
		for(int i=1;i<=n;i++)
		  cin>>a[i];
		sort(a+1,a+n+1);
}
void process(){
	int tong=0;
	for(int i=1;i<=n;i++){
		tong+=a[i]*b[i];
	}
	if(tong==k){
		 vector<int> kq;
	     for(int i=1;i<=n;i++)
		  if(a[i]*b[i]!=0) kq.push_back(a[i]);
		 res.push_back(kq);
	}
}
void Try(int i){
	for(int j=0;j<=1;j++){
		b[i]=j;
		if(i==n) process();
	    else Try(i+1);
	}
}
void in(){
    sort(res.begin(),res.end());
	if(res.size()==0) cout<<"-1";
	else{
	for(int i=0;i<res.size();i++){
		cout<<"[";
		for(int j=0;j<res[i].size()-1;j++){
			cout<<res[i][j]<<" ";
		}
		cout<<res[i][res[i].size()-1]<<"] ";
	
	}
 }
}
int main(){
	cin>>t;
	while(t--){
		 res.clear();
	     nhap();
		  Try(1);
		  in();
		  cout<<endl;
		 
	}
}

