#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[1000];
	cin>>n;
  
	 for(int i=0;i<n;i++){
	   cin>>a[i];
       
    }
    	vector<int> b;
    for(int i=0;i<n;i++){
    	b.push_back(a[i]);
    	 sort(b.begin(),b.end());
    	 cout<<"Buoc "<<i<<": ";
    	 for(int j=0;j<b.size();j++)
    	  cout<<b[j]<<" ";
    	cout<<endl;
	}
   
    
   
   
return 0;
}

