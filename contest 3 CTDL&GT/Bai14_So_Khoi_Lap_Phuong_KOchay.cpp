#include<bits/stdc++.h>
using namespace std;
int t;
long long n;
vector<string> preProcess(long long n){
	vector<string> preProcessCube;// khai bao 1 vector de luu nhung so lap phuong 
	for(int i=1;i*i*i<=n;i++){
		long long  cube=i*i*i;
	    string StringCube=to_string(cube);//chuyen ve dang xau
    	preProcessCube.push_back(StringCube);
     }
	return preProcessCube;
}
string maxCube(string num,vector<string> preProcessCube){
	reverse(preProcessCube.begin(),preProcessCube.end());// sap xep nguoc tu pt so lap phuong cuoi o vector ve trc 
	for(int i=0;i<preProcessCube.size();i++){//duyet tung phan tu so lap phuong  da dc luu trong vector 
	   string currentCube=preProcessCube[i];
	   int digitsInCube=currentCube.length();
	   int index=0;
	   int digitsInNum=num.length();
	   for(int j=0;j<digitsInNum;j++){
	   	 if(num[j]==currentCube[index])
	   	 	index++;
		 if(digitsInCube==index)
		   return currentCube;	
	   }
     }
     return "-1";
}
void process(long long n){
	vector<string> preProcessCube=preProcess(n);
	string num=to_string(n);
	string res=maxCube(num,preProcessCube);
	cout<<res;
	
}
int main(){
cin>>t;
while(t--){
	cin>>n;
	process(n);
	cout<<endl;
}
}

