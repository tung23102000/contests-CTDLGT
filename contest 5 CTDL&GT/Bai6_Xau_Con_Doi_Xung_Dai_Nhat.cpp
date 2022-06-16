/* NOTE:    xau doi xung la xau khi doc tu trai sang phai hay tu phai sang trai deu nhu nhau vd: aaa, aba,abcba...*/
#include<bits/stdc++.h>
using namespace std;
int t;
int f[5000][5000];// goi f[i][j] la do dai xau con lon nhat cua doan tu s[i..j]
int main(){
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++){
			f[i][i]=1;
		}
		for(int i=s.length()-1;i>=0;i--){
			for(int j=i+1;j<=s.length()-1;j++){
				if(s[i]==s[j]) f[i][j]=f[i+1][j-1]+2;
				else f[i][j]=max(f[i+1][j],f[i][j-1]);
			}
		}
		cout<<f[0][s.length()-1]<<endl;
	}

}

