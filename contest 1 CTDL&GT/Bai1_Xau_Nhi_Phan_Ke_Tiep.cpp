#include<bits/stdc++.h>
using namespace std;
string s;
int t;
//duyet tu phai sang trai neu gap s[i]=0-->s[i]=1 va s[j](i<j<s.length()) gan bang =0;
void Next_Bit_String(void){
	int i=s.length()-1;
	while(i>=0&&s[i]!='0'){
		i--;
	}
	if(i<0){// neu ko gap s[i] nao =0 thi no da la cau hinh toi da 111...1
		for(int i=0;i<s.length();i++)
			cout<<0;
		cout<<endl;
	}
	else{
		s[i]='1';
		for(int j=i+1;j<s.length();j++){
			s[j]='0';
		}
		cout<<s<<endl;
	}
}
int main(){
	cin>>t;  
    
	while(t--){
    cin>>s;
	Next_Bit_String();
	
	
	}
	

}

