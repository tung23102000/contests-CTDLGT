#include<bits/stdc++.h> 
using namespace std; 
int t,n;
int A[100];
void process(int A[] , int n){ 
        if (n < 1) 
            return; 
        int temp[n - 1]; 
        for (int i = 0; i < n - 1; i++){
		  int x = A[i] + A[i + 1]; 
            temp[i] = x; 
        } 
        cout<<"[";
    for (int i = 0; i < n ; i++){
	    if(i==0&&i!=n-1) cout<<A[i]<<" ";
        else{
		  if(i == n - 1) 
            cout << A[i] << "]";
          else cout << A[i] << " ";
        }
	}
		cout << endl; 
        process(temp, n - 1); 
	}
int main(){
    cin>>t;
    while(t--){
	   cin>>n;
	   for(int i=0;i<n;i++){
	   	 cin>>A[i];
	   }
       process(A, n); 
    } 
}

