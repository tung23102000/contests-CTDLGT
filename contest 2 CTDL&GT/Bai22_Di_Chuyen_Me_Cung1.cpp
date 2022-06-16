#include<bits/stdc++.h>
using namespace std;
int a[11][11],dau[11][11];
int  t,n;
char x[100];
bool printed=false;
void xuat(int k){
	for(int i=0;i<k;i++){
		cout<<x[i];
	}
	cout<<" ";
	printed=true;
}
void Try(int i,int j,int k){
	if(i==n-1&&j==n-1){
		xuat(k);
		return;
	}
	if(i+1<n&&a[i+1][j]==1&&dau[i+1][j]==0){
		dau[i][j]=1;
		x[k]='D';
		Try(i+1,j,k+1);
		dau[i][j]=0;
	}
	
	if(j+1<n&&a[i][j+1]==1&&dau[i][j+1]==0){
		dau[i][j]=1;
		x[k]='R';
		Try(i,j+1,k+1);
		dau[i][j]=0;
	}
	
}

int main(){
	cin>>t;
	cin.ignore();
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
			 cin>>a[i][j];
		}
		printed=false;
		if(a[0][0]!=1) cout<<"-1";
		else{
			Try(0,0,0);
		if(!printed) cout<<"-1";
		}
		cout<<endl;
		
	}

}

