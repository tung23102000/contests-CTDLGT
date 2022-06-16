#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,stt;
	string s;
	cin>>t;
	while(t--){
		cin>>stt;
		cin>>s;
		bool check=next_permutation(s.begin(),s.end());
		if(check==true) cout<<stt<<" "<<s;
        else cout<<"BIGGEST";
        cout<<endl;
}
}

