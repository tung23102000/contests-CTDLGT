#include<bits/stdc++.h>
using namespace std;
int t,x;
string s;
deque<int> dq;
int main(){
	cin>>t;
	while(t--){
		cin>>s;
		if(s=="PUSHFRONT"){
			cin>>x;
			dq.push_front(x);
			
		}
		if(s=="PRINTFRONT"){
			if(!dq.empty()){
               cout<<dq.front()<<endl;		
			}
			 else cout<<"NONE"<<endl;	
		}
		if(s=="POPFRONT"){
			if(!dq.empty()){
				dq.pop_front();
			}
		}
		if(s=="PUSHBACK"){
			cin>>x;
			dq.push_back(x);
			
		}
	    if(s=="PRINTBACK"){
			if(!dq.empty()){
               cout<<dq.back()<<endl;
			}
			else cout<<"NONE"<<endl;		
		}
		if(s=="POPBACK"){
			if(!dq.empty()){
				dq.pop_back();
			}
		}	
	}

}

