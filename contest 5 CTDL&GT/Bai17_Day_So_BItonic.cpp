#include<bits/stdc++.h>
using namespace std;
int t;
int maxSumBS(int a[],int n){
	int maxsum=INT_MIN;
	int MSIBS[n],MSDBS[n];//tong day tang va tong day giam
	for(int i=0;i<n;i++){
		MSIBS[i]=a[i];
		MSDBS[i]=a[i];
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++)
		if(a[i]>a[j]&&MSIBS[i]<MSIBS[j]+a[i]){
			MSIBS[i]=MSIBS[j]+a[i];
		}
	}
	for(int i=n-2;i>=0;i--){
		for(int j=n-1;j>i;j--)
			if(a[i]>a[j]&&MSDBS[i]<MSDBS[j]+a[i])
			   MSDBS[i]=MSDBS[j]+a[i];
	
	}
	for(int i=0;i<n;i++){
		maxsum=max(maxsum,MSIBS[i]+MSDBS[i]-a[i]);
	}
	return maxsum;
	
}
int main(){
    cin>>t;
    while(t--){
       int n,a[110];
       cin>>n;
       for(int i=0;i<n;i++) cin>>a[i];
       cout<<maxSumBS(a,n)<<endl;
	}
    	
}

