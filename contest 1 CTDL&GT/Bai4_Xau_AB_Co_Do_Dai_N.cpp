#include<bits/stdc++.h>
using namespace std;
int t,n;
char a[100];
bool OK=true;
void xuat(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<" ";

}
void process(){
int i=n; 
while(i>0 && a[i]=='B'){ //duy?t t? v? tr� b�n ph?i nh?t 
a[i]='A';
i--; //l�i lai vi tr� sau 
} 
if (i>0)  a[i]='B'; //gap X[i] =0 d?u ti�n ta chuy?n th�nh 1 
else OK = false; //ket th�c khi g?p x�u c� n s? 1 
}
int main(){
cin>>t;
for(int i=0;i<t;i++){
   cin>>n;
	for(int i=1;i<=n;i++){
		a[i]='A';
	}
	OK=true;
	while(OK){
	xuat();
	process();

	}
	cout<<endl;
}
}

