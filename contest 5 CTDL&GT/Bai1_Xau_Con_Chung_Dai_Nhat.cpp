#include<bits/stdc++.h>
using namespace std;
int t;
int l[1010][1010];
int main(){
   cin>>t;
   while(t--){
   	string s1,s2;
   	cin>>s1>>s2;
   	int res=0;
   	int m=s1.size();
    int n=s2.size();
    memset(l,0,sizeof(l));//khoi tao mang l bang 0
   	for(int i=1;i<=m;i++){
   		for(int j=1;j<=n;j++){
   			// goi l[i][j] do dai xau con chung lon nhat tinh den ki tu thu i cua xau s1 va den ki tu thu j cua xau s2
   			if(s1[i-1]==s2[j-1]) l[i][j]=l[i-1][j-1]+1;
   			else l[i][j]=max(l[i-1][j],l[i][j-1]);// gtri max cua (do dai xau lon nhat tinh den ki tu i-1 cua xau s1 va tinh den ki tu j cua xau s2 OR do dai xau lon nhat tinh den ki tu i cua xau s1 va tinh den ki tu j-1 cua xau s2
   			res=max(res,l[i][j]);
		   }
		}
		cout<<res;
	    cout<<endl;
	}
}

