#include<bits/stdc++.h>
using namespace std;
int t;
long long f[30][30];
int main(){
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
    
		for(int i=0;i<=n;i++){//tu hoanh do =0 den hoanh do =n
			f[i][0]=1;// co 1 cach di chuyen do de bai cho la tu o (n,0) ve goc toa do co 1 cach
		}
		for(int i=0;i<=m;i++){//tu tung do =0 den tung do =m
			f[0][i]=1;// co 1 cach di chuyen do de bai cho la tu o (0,m) ve goc toa do co 1 cach
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				f[i][j]=f[i-1][j]+f[i][j-1];
			}
		}
		cout<<f[n][m]<<endl;
	}

}

