/*#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
  cin>>t;
  while(t--){
  	int n,x;
  	cin>>n>>x;
  	int a[n];
  	for(int i=0;i<n;i++){
  		cin>>a[i];
	  }
	  if(count(a,a+n,x)==0) cout<<-1;
	  else cout<<count(a,a+n,x);
	  cout<<endl;
  }
}*/
#include<bits/stdc++.h>
using namespace std;
int t;
int d[1000000]={0};
int main(){
  cin>>t;
  while(t--){
  	int n,x;
  	cin>>n>>x;
  	int a[n];
  	for(int i=0;i<n;i++){
  		cin>>a[i];
  		d[a[i]]++;
	}
	if(d[x]==0) cout<<-1;
	else cout<<d[x];
	cout<<endl;
 }
}

