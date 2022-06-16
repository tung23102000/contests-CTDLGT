#include<bits/stdc++.h>
using namespace std;
int t;
struct data{
	int x,y;
};
bool cmp(data a,data b){
	return a.x<b.x;
}
int main(){
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		data a[n+5];
		int f[n+5];
		for(int i=1;i<=n;i++){
			cin>>a[i].x>>a[i].y;
			f[i]=1;//goi f[i] la so cap so thoa man , kieu gi cung co it nhat 1 cap so do de bai cho la so thu 1 trong cap so < so thu 2 trong cung cap do
		}
		// sap xep theo thu tu tang dan gia tri dau tien trong cap so
		sort(a+1,a+1+n,cmp);
		for(int i=1;i<=n;i++){// duyet tung cap
			for(int j=1;j<i;j++){//duyet cap truoc cap dang xet
				if(a[i].x>a[j].y) f[i]=max(f[i],f[j]+1);
			}
		}
		cout<<f[n]<<endl;
	}

}

