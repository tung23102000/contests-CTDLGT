#include<bits/stdc++.h>
using namespace std;
int t;
struct data{
	int a;
	int c;
};
int f[1005][1005];// goi f[i][j] la gia tri su dung lon nhat chon den do vat thu i va co the tich toi da la j 
int main(){
   cin>>t;
   while(t--){
   	 int n,v;
	 cin>>n>>v;
	 data tui[n+5];
	 
	 for(int i=1;i<=n;i++)
	   cin>>tui[i].a;
	for(int i=1;i<=n;i++)
	   cin>>tui[i].c;
	memset(f,0,sizeof(f));
	for(int i=1;i<=n;i++){//duyet tung do vat
		for(int j=1;j<=v;j++)//duyet tung the tich
		  if(j>=tui[i].a) 
		    f[i][j]=max(f[i-1][j],f[i-1][j-tui[i].a]+tui[i].c);
		  else f[i][j]=f[i-1][j];
	}
	 cout<<f[n][v]<<endl;
   }
}

