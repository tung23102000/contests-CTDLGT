#include<bits/stdc++.h>
using namespace std;
int t,k;
string s;
int main(){
cin>>t;
while(t--){
	cin>>k>>s;
	int dem[1000]={0};
    for(int i=0;i<s.size();i++){
    	dem[s[i]]++;
	}
	priority_queue< int,vector<int> >q;// tu cao xuong thap
	for(int i=0;i<s.size();i++){
		if(dem[s[i]]>0){
			q.push(dem[s[i]]);
			dem[s[i]]=0;
		}
	}
	while(k>0&&q.size()>0){
		k-=1;
		int t=q.top(); q.pop();
		t--;
		q.push(t);
	}
	long long value=0;
	while(q.size()>0){
		int t=q.top(); q.pop();
		value+=t*t;
	}
	cout<<value;
	cout<<endl;
 }
}

