#include<iostream>
#include<string.h>
using namespace std;
void xoa_khoang_trang_dau_cuoi(string &s){
    while(s[0]==' '){
		s.erase(s.begin()+ 0);//xoa tai vi tri thu 0
	}
	while(s[s.length()-1]==' '){
		s.erase(s.begin()+s.length()-1);//xoa tai vi thu cuoi
	}
}
void xoa_khoang_trang_giua_cac_tu(string &s){
	for(int i=0;i<s.length();i++){
		if(s[i]==' '&&s[i+1]==' '){
			s.erase(s.begin()+i);
			i--;
		}
	}
}
void chuan_hoa_chu(string &s){
	strlwr((char *) s.c_str());
	if(s[0]!=' '&&s[0]>=97&&s[0]<=122){
	s[0]-=32;
	}
	for(int i=0;i<s.length()-1;i++){
		if(s[i]==' '&&s[i+1]!=' '){
			if(s[i+1]>=97&&s[i+1]<=122)
		    	s[i+1]-=32;
		}
	}
}
int main(){
	string s;
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
	   	getline(cin,s);
		if(s.length()<=80){
		xoa_khoang_trang_dau_cuoi(s);
		xoa_khoang_trang_giua_cac_tu(s);
		chuan_hoa_chu(s);
		cout<<s<<endl;
	}
	}

}

