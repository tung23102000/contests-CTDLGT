#include<bits/stdc++.h>
using namespace std;
int t;
long long tu, mau,res;
int main(){
	cin>>t;
	while(t--){
		cin>>tu>>mau;
		while(true){
		 if(mau%tu==0){
			cout<<"1/"<<mau/tu<<endl;
			break;
		}
		else{
			res=mau/tu+1;
			cout<<"1/"<<res<<" + ";
			tu=tu*res-mau;
			mau=mau*res;
		}
	}
  }
}

