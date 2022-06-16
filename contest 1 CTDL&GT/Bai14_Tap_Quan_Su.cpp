#include<bits/stdc++.h>
using namespace std;
int t,n,k;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[100];
       int b[100]={0};
		for(int i=1;i<=k;i++){
			cin>>a[i];
			b[a[i]]=1;//danh dau cac ptu vua nhap la 1
		}
	int i=k;
	while(i>0&&a[i]==n-k+i) i--;
	if(i>=1){
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++)
		 a[j]=a[i]+j-i;
		 for(int i=1;i<=k;i++){
	    	b[a[i]]=0;//danh dau cac ptu sau khi sinh ra moi la 0
	}
	int sl=0;
	for(int i=1;i<=n;i++){
		if(b[i]) sl++;//danh dau theo chi so
	}
	cout<<sl;
	}
	else cout<<k;
	cout<<endl;
		
	}

}

