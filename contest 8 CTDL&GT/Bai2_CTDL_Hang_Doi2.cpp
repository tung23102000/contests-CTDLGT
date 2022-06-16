#include<bits/stdc++.h>
using namespace std;
int t,x;
string s;
int main(){
queue <int> q;
cin>>t;
while(t--){
	cin>>s;
	if(s=="PUSH"){
		cin>>x;
		q.push(x);
	}
	else if(s=="POP"){
		if(!q.empty()){
			q.pop();
		}
	}
	else if(s=="PRINTFRONT"){
		if(q.empty())
		  cout<<"NONE"<<endl;
		else cout<<q.front()<<endl;
	}
 }
}

