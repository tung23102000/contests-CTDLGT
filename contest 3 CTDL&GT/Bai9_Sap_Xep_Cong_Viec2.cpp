#include<bits/stdc++.h>
using namespace std;
int t,n;
struct job{
	int id,deadline,profit;
};
bool compare(job a,job b){
	return a.profit>b.profit;
}
	
int main(){
  cin>>t;
  while(t--){
  	cin>>n;
  	job a[n];
  	for(int i=0;i<n;i++)
  	  cin>>a[i].id>>a[i].deadline>>a[i].profit;
  	sort(a,a+n,compare);
  	int dem=0,res=0;
  	int f[1001]={0};
  	for(int i=0;i<n;i++){
  		while(f[a[i].deadline]&&a[i].deadline>0) a[i].deadline-=1;
  		if(!f[a[i].deadline]&&a[i].deadline>0){
  			f[a[i].deadline]=1;
  			res+=a[i].profit;
  			dem++;
		  }
	  }
	cout<<dem<<" "<<res;
	cout<<endl;
  }
}

