#include<bits/stdc++.h>
using namespace std;

struct data{
	int val,pos;
};
bool cmp(data a,data b){
	if(a.val<b.val) return true;
	if(a.val==b.val&&a.pos<b.pos) return true;
	return false;
}
int main(){
	int t;
  cin>>t;
  while(t--){
  	int n;
  	cin>>n;
  	vector<data> a(n);
  	for(int i=0;i<n;i++){
  		cin>>a[i].val;
  		a[i].pos=i;
  	}
  	sort(a.begin(),a.end(),cmp);
  	int result=0;
  	for(int i=0;i<n;i++){
  		while(a[i].pos!=i){// vi tri trc khi sort la a[i].pos khac vi sau khi sort thi moi doi cho
  			result++;
  			swap(a[i],a[a[i].pos]);
		  }
	  }
  	  cout<<result<<endl;
  	
  }
}

