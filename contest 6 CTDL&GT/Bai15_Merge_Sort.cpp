#include<bits/stdc++.h>
using namespace std;

void merge(long long a[],long long le,long long m,long long r){
	long long i,j,k;
	long long n1=m-le+1;
	long long n2=r-(m+1)+1;
	long long L[n1],R[n2];
	for(i=0;i<n1;i++)
	   L[i]=a[le+i];
	for(j=0;j<n2;j++)
	   R[j]=a[m+1+j];
	i=0,j=0,k=le;
	while(i<n1&&j<n2){
		if(L[i]<=R[j]){
			a[k]=L[i];
			i++;
		}
		else{
		 a[k]=R[j];
		 j++;
	   }
	   k++;
	}
	while(i<n1){
		a[k]=L[i];
		i++;
		k++;
	}
	while(j<n2){
		a[k]=R[j];
		j++;
		k++;
	}
}
void mergeSort(long long a[],long long le,long long r){
	if(le<r){
		long long m=le+(r-le)/2;
		mergeSort(a,le,m);
		mergeSort(a,m+1,r);
		merge(a,le,m,r);
	}
}
int main(){
	int t;
  cin>>t;
  while(t--){
  	long long n;
  	cin>>n;
  	long long a[n];
  	for(long long i=0;i<n;i++)
  	  cin>>a[i];
  	  mergeSort(a,0,n-1);
  	  for(long long i=0;i<n;i++)
		cout<<a[i]<<" ";
	 cout<<endl;
  }
}

