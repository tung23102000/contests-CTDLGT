//chuyen ma tran ke sang ds ke
#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
int main(){
	vector<int> ke[1005];

    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		cin>>a[i][j];
    		if(a[i][j]) ke[i].push_back(j);
    	}
    }
   
   for(int i=1;i<=n;i++){
   	 for(int j=0;j<ke[i].size();j++)
   	 cout<<ke[i][j]<<" ";
   	 cout<<endl;
   }
return 0;
}

