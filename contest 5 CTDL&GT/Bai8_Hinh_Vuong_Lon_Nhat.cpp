#include<bits/stdc++.h>
using namespace std;
int t;
int a[1010][1010];
int n,m;
int f[1010][1010];// kich thuoc cua hinh vuong
void process(){
	int max=0;
	for(int i=0;i<n;i++) f[i][0]=a[i][0];
	for(int j=0;j<m;j++) f[0][j]=a[0][j];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==1){
				f[i][j]=min(f[i][j-1],min(f[i-1][j],f[i-1][j-1]))+1;
			}
			else f[i][j]=0;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(max<f[i][j]) max=f[i][j];
		}
	}
	cout<<max<<endl;
}
int main(){
   cin>>t;
   while(t--){
   	cin>>n>>m;
   	for(int i=0;i<n;i++){
   		for(int j=0;j<m;j++){
   			  cin>>a[i][j];
		   }
	   }
	process();  
   }
}

