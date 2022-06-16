#include<bits/stdc++.h>
using namespace std;
int n,c[20][20],chuaxet[20],x[20], Cmin=1e9,fopt=1e9,sum=0;
void init(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>c[i][j];
			if(c[i][j]<Cmin&&c[i][j]!=0)
			  Cmin=c[i][j];
		}
	}
		x[1]=1;
		for(int i=2;i<=n;i++)
		   chuaxet[i]=true;
}
void Back_Track(int i){
	for(int j=2;j<=n;j++){
		if(chuaxet[j]){
			x[i]=j;
			sum+=c[x[i-1]][x[i]];
			chuaxet[j]=false;
			if(i==n){
				sum+=c[x[n]][x[1]];
				if(sum<fopt) fopt=sum;
				sum-=c[x[n]][x[1]];
			}
			else if(sum+(n+1-i)*Cmin<fopt)
			       Back_Track(i+1);
			    chuaxet[j]=true;
			    sum-=c[x[i-1]][x[i]];
		}
	}
}
int main(){
init();
Back_Track(2);
cout<<fopt<<endl;
}

