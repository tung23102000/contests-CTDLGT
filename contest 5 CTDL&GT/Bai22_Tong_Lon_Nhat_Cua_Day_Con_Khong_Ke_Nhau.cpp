#include<bits/stdc++.h>
using namespace std;
int t;
int FindMaxSum(int a[], int n) 
{ 
  int incl = a[0]; 
  int excl = 0; 
  int excl_new; 
  for (int i = 1; i < n; i++) 
  { 
    
     excl_new = (incl > excl)? incl: excl; 
     incl = excl + a[i]; 
     excl = excl_new; 
  } 
  
   return ((incl > excl)? incl : excl); 
} 
int main(){
   cin>>t;
   while(t--){
   	 int n;
   	 cin>>n;
   	 int a[n+5];
   	 for(int i=0;i<n;i++)
   	   cin>>a[i];
   	 cout<<FindMaxSum(a,n)<<endl;
   }
}

