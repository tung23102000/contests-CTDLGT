#include<bits/stdc++.h>
using namespace std;
int t;
string s1,s2;
long long chuyenthapphan(string s){
	long long so=0;
	for(int i=s.length()-1;i>=0;i--){
		if(s[i]=='1') so+=pow(2,(s.length()-1-i));
	}
	return so;
}
int main(){
	cin>>t;
	while(t--){
		cin>>s1>>s2;
		cout<<chuyenthapphan(s1)*chuyenthapphan(s2);
		cout<<endl;
	}

}

