#include<iostream>
#include<queue>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long k;
		string s;
		cin>>k>>s;
		long long d[300]={0};
		priority_queue<long long, vector<long long> > q;
		for(int i=0;i<s.size();i++){
			d[s[i]]++;
			
		}
		for(int i=0;i<300;i++){
			if(d[i]>0) q.push(d[i]);//i o trong d[i] dong vai tro la ki tu s[i] khi doi ra ma ASCII
		}
		// phan tu lon nhat se o tren cung cua priority queue q va giam dan tu tren xuong
		while(q.size()>0&&k>0){
			long long top=q.top();q.pop();
			k--;
			top--;
			q.push(top);
		}
		long long res=0;
		while(q.size()>0){
			res+=q.top()*q.top();
			q.pop();
		}
		cout<<res<<endl;
	}

}

