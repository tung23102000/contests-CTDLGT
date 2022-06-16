#include<bits/stdc++.h>
using namespace std;
int t,s,d;
int tongcs(int n){
	int sum=0;
	while(n>0){
		int a=n%10;
		sum+=a;
		n/=10;
	}
	return sum;
}
int main(){
cin>>t;
while(t--){
	cin>>s>>d;
	if(s>d*9) cout<<-1;
	else{
	for(int i=pow(10,d-1);i<=pow(10,d)-1;i++){
		if(tongcs(i)==s){
			cout<<i;
			break;
		}
	}
  }
	cout<<endl;
 }
}

