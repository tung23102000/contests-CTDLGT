#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  int n;
  stack<int> stk;
  while(cin>>s){
  	if(s=="push"){
  		cin>>n;
  		stk.push(n);
	  }
	else if(s=="pop"){
		stk.pop();
	}
	else if(s=="show"){
		vector<int> a;
		if(stk.empty()){
		cout<<"empty"<<endl;
		continue;
	  }
	    while(!stk.empty()){
	    	a.push_back(stk.top());
	    	stk.pop();
		}
		reverse(a.begin(),a.end());// dao nguoc
		for(int i=0;i<a.size();i++){
			cout<<a[i]<<" ";
			stk.push(a[i]);//them phan tu da loai bo luc nay vao stack de sau lenh show con dung tiep
		}
		cout<<endl;
	}
  }
  
}

