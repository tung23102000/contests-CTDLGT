#include<iostream>
#include<string>
#include<vector>
using namespace std;
int t,n;

vector <string> a;
void process(){
	vector <string> a;
	int i,j;
    a.push_back("0");
	a.push_back("1");
	for(i=2;i< 1<<(n);i=i<<1){// 1<<(n) dich chuyen 1 sang trai n bit( nhan voi 2 mu n)// i<<1 dich chuyen i sang trai 1 bit (nhan 2 mu 1)
		for(j=i-1;j>=0;j--){
			a.push_back(a[j]);
		}
		for(j=0;j<i;j++){
			a[j]="0"+a[j];
		}
		for(j=i;j<2*i;j++){
			a[j]="1"+a[j];
		}
	}
		for(i=0;i<a.size();i++)
			cout<<a[i]<<" ";
}
int main(){
	cin>>t;
    while(t--){
	cin>>n;
	process();
	cout<<endl;
	}

}

