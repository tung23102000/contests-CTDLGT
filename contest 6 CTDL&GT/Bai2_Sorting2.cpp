#include<bits/stdc++.h>
using namespace std;
int t;
struct data{
	int val1,i,val2;
	
};
bool cmp(data a,data b){
	if(a.val2>b.val2) return false;// neu so dung trc ma lon hon thi sai
	if(a.val2==b.val2&&a.i>b.i) return false;//neu chi so cua so dung trc ma lon hon chi so cua so dung sau la sai
	return true;
}
int main(){
    cin>>t;
    while(t--){
    	int n,x;
    	cin>>n>>x;
    	vector <data> a(n);
    	for(int i=0;i<n;i++){
    		cin>>a[i].val1;
    		a[i].val2=abs(x-a[i].val1);
    		a[i].i=i;
    	}
    	sort(a.begin(),a.end(),cmp);
    	for(int i=0;i<n;i++)
    	  cout<<a[i].val1<<" ";
    	  cout<<endl;
	}
}

