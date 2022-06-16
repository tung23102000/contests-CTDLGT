#include<bits/stdc++.h>
using namespace std;
int n,dem=0;
bool cot[11];
bool dcxuoi[22];
bool dcnguoc[22];
void Try(int i){
	for(int j=0;j<n;j++){
		if(!cot[j]&&!dcxuoi[i-j+n]&&!dcnguoc[i+j-1]){// chua xet=false;
		
		  cot[j]=dcxuoi[i-j+n]=dcnguoc[i+j-1]=true;//da xet
		  if(i==n-1) dem++;
		  else Try(i+1);
		  cot[j]=dcxuoi[i-j+n]=dcnguoc[i+j-1]=false;//khoi tao lai la chua xet=false
	  }
	}
}

int main(){
cin>>n;
Try(0);
cout<<dem;
}

