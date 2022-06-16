#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int t;
string binary;
char xor_c(char a, char b){
	return (a==b) ?'0': '1';
}
string binary_to_gray(string binary){
 string gray="";
 gray+=binary[0];
 for(int i=1;i<binary.length();i++){
	gray+=xor_c(binary[i-1],binary[i]);
  }
 return gray;
}
int main(){
	cin>>t;
	cin.ignore();
	while(t--){
		getline(cin,binary);
		cout<<binary_to_gray(binary);
		cout<<endl;
	}
	return 0;
	

}

