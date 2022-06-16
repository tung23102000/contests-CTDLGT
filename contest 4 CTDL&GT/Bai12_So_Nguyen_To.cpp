#include <iostream>
#include <math.h>

using namespace std;
int n,p,a[10000],ok[10000],rt[10000][10000],x;
long long s;
int isNgto(int nt){
    if(nt < 2) return 0;
    for(int i = 2;i<=sqrt(nt);i++){
        if(nt%i == 0) return 0;
    }
    return 1;
}
void result(){
    for(int i = 1;i<=n;i++){
        rt[x][i] = a[i];
    }
    x++;
    // cout << endl;
}
void Try(int i){
    for(int j = p+1;j<=s;j++){
        if(isNgto(j) == 1 && ok[j] == 0 && j > a[i-1]){
            a[i] = j;
            ok[j] = 1;
            if(i == n){
                int sum = 0;
                for(int k = 1;k<=n;k++){
                    sum+=a[k];
                }
                if(sum == s) result();
            }else  {
                Try(i+1);
            }
            ok[j] = 0;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        // for(int i = 1;i<10000;i++) ok[i] = 1;
        cin >> n >> p >> s;
        Try(1);
        cout << x << endl;
        for(int i = 0;i<x;i++){
            for(int j = 1;j<=n;j++){
                cout << rt[i][j] << " ";
            }
            cout << endl;
        }
        x = 0;
        // cout << isNgto(7);
    }
    return 0;
}
