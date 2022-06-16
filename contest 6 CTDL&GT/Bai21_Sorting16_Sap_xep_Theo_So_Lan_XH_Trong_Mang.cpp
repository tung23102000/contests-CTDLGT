//#include<bits/stdc++.h>
//using namespace std;
//struct data{
//	int val,freq;
//};
//bool cmp(data a, data b){
//	if(a.freq>b.freq) return true;
//	if(a.freq==b.freq&&a.val<b.val) return true;
//	return false;
//}
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//	 int n;
//	 cin>>n;
//	 int d[100005]={0};
//	 data a[n];
//	 for(int i=0;i<n;i++){
//	 	cin>>a[i].val;
//	 	d[a[i].val]++;
//	 }	
//	 for(int i=0;i<n;i++){
//	 	a[i].freq=d[a[i].val];
//	 }
//	 sort(a,a+n,cmp);
//	 for(int i=0;i<n;i++)
//	   cout<<a[i].val<<" ";
//	cout<<endl;
//	}
//	
//
//}
#include<bits/stdc++.h>
using namespace std;
struct data{
	int val,freq;
};
bool cmp(data a, data b){
	if(a.freq>b.freq) return true;
	if(a.freq==b.freq&&a.val<b.val) return true;
	return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		data a[n];
		int d[100005]={0};
		for(int i=0;i<n;i++){
			cin>>a[i].val;
			d[a[i].val]++;
		}
		for(int i=0;i<n;i++){
			a[i].freq=d[a[i].val];
		}
		sort(a,a+n,cmp);
		for(int i=0;i<n;i++)
		  cout<<a[i].val<<" ";
		cout<<endl;
	}
}
