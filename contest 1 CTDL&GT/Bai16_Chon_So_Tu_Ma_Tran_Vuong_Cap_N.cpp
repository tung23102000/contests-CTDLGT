#include<bits/stdc++.h>
using namespace std;
int n,k,c[100][100],chuaxet[100],x[100];
int dem=0;
void init(){
	for(int i=1;i<=n;i++){
		chuaxet[i]=true;
		for(int j=1;j<=n;j++)
		  cin>>c[i][j];
	}
}
int check(){
	int s=0;
	for(int i=1;i<=n;i++){
		s+=c[i][x[i]];//x[i]=j
	}
	return (s==k);
}
void xuat(){
	for(int i=1;i<=n;i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
}
void Try1(int i){
	for(int j=1;j<=n;j++){
		if(chuaxet[j]){
			x[i]=j;
			chuaxet[j]=false;
			if(i==n){
				if(check()) dem++;
			}
			else Try1(i+1);
			chuaxet[j]=true;
		}
	}
}
void Try2(int i){
	for(int j=1;j<=n;j++){
		if(chuaxet[j]){
			x[i]=j;
			chuaxet[j]=false;
			if(i==n){
				if(check()) xuat();
			}
			else Try2(i+1);
			chuaxet[j]=true;
		}
	}
}
int main(){
	cin>>n>>k;
	init();
	Try1(1);
	cout<<dem<<endl;
	Try2(1);
}

