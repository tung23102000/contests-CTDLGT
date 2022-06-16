#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s,a[1000];
		cin>>n>>s;
		for(int i=0;i<n;i++)
		  cin>>a[i];
		int l[50000]={0};
		/*  su dung pp danh dau l[s]=0 neu ko the tao ra day con co tong bang s, nguoc lai l[s]=1 neu co the tao ra day con co tong bang s*/
		l[0]=1;// danh dau co the tao ra day con co tong bang 0
		for(int i=1;i<=n;i++){
			for(int t=s;t>=a[i];t--){
				if(l[t]==0&&l[t-a[i]]==1) l[t]=1;
			}
		}
		if(l[s]==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
	}

}

