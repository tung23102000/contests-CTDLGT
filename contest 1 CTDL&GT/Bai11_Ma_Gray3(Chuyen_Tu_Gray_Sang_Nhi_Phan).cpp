#include<bits/stdc++.h>
#include<string>
using namespace std;
int t;
string gray;
char flip(char a){
	return (a=='0')?'1':'0';
}
string Gray_to_Binary(string gray){
	string binary="";
	binary+=gray[0];
	for(int i=1;i<gray.length();i++){
		if(gray[i]=='0') binary+=binary[i-1];
		else binary+=flip(binary[i-1]);
	}
	return binary;
}
int main(){
cin>>t;
cin.ignore();
while(t--){
	getline(cin,gray);
	cout<<Gray_to_Binary(gray);
	cout<<endl;
}
}

