#include<bits/stdc++.h>
using namespace std;
int t,n;
struct act{
	int fi,s;
};
act a[1010];
bool compare(act a,act b){
	return a.fi<b.fi;
}
int main(){
cin>>t;
while(t--){
  cin>>n;
   for(int i=0;i<n;i++)
   	cin>>a[i].s;
   for(int i=0;i<n;i++)
     cin>>a[i].fi;
    sort(a,a+n,compare);
    int dem=1,i=0;
    for(int j=1;j<n;j++){
    	if(a[j].s>=a[i].fi){
    		dem++;
    		i=j;
		}
	}
	cout<<dem<<endl;
  }
}

