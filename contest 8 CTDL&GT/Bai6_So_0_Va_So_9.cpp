#include<bits/stdc++.h>
using namespace std;
int t,n,x[20];
vector<long long> a;
void Try(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==17){
			long long temp=0;
			for(int i=1;i<=17;i++){
				if(x[i]) temp=temp*10+9;
				else temp*=10;
			}
			a.push_back(temp);
		}
		else Try(i+1);
	}
}
int main(){
Try(1);
cin>>t;
while(t--){
	cin>>n;
	for(int i=1;i<a.size();i++){
		if(a[i]%n==0){
			cout<<a[i]<<endl;
			break;
		}
	}
}
}

