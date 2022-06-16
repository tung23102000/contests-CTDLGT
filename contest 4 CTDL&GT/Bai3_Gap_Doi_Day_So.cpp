#include<bits/stdc++.h>
using namespace std;
int t;
long long power(int a,int n){
	if(n==0) return 1;
	if(n%2==0){
		long long p=power(a,n/2);
		return p*p;
	}
	else{
		long long p=power(a,n-1);
		return p*a;
	}
}
int main(){
	cin>>t;
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		long long len=power(2,n-1);// do dai tu so dau tien cua day den vi tri co gia tri la x
		while(1){
		   if(k==1){
			cout<<1;
			break;
		  }
		  if(k==len){// neu vi tri thu k== len thi in ra n  
		    cout<<n;
		    break;
	      }
	      if(k>len){
	      	k=len-(k-len);
		  }
		  n--;//neu k ko thuoc trong 3 truong hop tren thi giam n 1 don vi
		  len/=2;/* dich ve vi tri trung tam moi vd: nhap n=3 , k=2 day [1 2 1 3 1 2 1] do k=2<len=4(tu vi tri thu 1 den vi tri cua ptu co gia tri x;
		         n-- -> n=2, len/=2 -> len=2 -> luc nay thi k==len==2 cout<<n =2*/
	   }
        cout<<endl;
    }
}

