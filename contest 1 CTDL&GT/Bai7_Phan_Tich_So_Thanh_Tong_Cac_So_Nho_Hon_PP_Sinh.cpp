#include<bits/stdc++.h>
using namespace std;
int t,n,a[100];
int k;// do dai day phan tich hien tai
bool OK=true;
void init(){// khoi tao gia tri dau
	 k=1;
	a[1]=n;
}
void in(){
	for(int i=1;i<=k;i++){
		if(i==1) cout<<"(";
		cout<<a[i];
		if(i<k) cout<<" ";
		else cout<<") ";
	}
}
void process(){
	int i=k,j,r,s,d;
	while(i>0&&a[i]==1) i--;
	if(i>0){
		a[i]=a[i]-1;
		d=k-i+1;//tong cuoi
		r=d/a[i];//thuong
		s=d%a[i];//du
		k=i;
	if(r>0){
		for(j=i+1;j<=i+r;j++){
			a[j]=a[i];
			
		}
		k=k+r;
	}
	if(s>0){
		k=k+1;
		a[k]=s;// gan ptu cuoi x[k] bang so du con lai
	}
 }
 else OK=false;// den cau hinh cuoi
}
int main(){
cin>>t;
while(t--){
	cin>>n;
	init();
	OK=true;
	while(OK){
		in();
		process();
	
	}
		cout<<endl;
	
}
	
}

