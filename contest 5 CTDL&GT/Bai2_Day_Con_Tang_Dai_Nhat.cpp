#include<bits/stdc++.h>
using namespace std;
int n,a[1010];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
	    cin>>a[i];
	int l[1010]={0};
	int res=0;
	for(int i=1;i<=n;i++){
		l[i]=1;//do dai xau tang dan ket thuc tai vi tri thu i,do day tren dc nhap 1 cach lon xon, ko lien mach nen gan bang 1
		for(int j=1;j<i;j++){
			if(a[j]<a[i]) l[i]=max(l[i],l[j]+1);
		}
		res=max(res,l[i]);
	}
	cout<<res;
	

}

