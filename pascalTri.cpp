#include<iostream>
using namespace std;

int fact(int n){
    int ans = 1;
    for(int i=1; i<=n; i++) ans *= i;
    return ans;
}

int nCr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}

int main(){
    int n;
    cout<<"Enter number of row : ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            int a = nCr(i,j);
            cout<<a<<" ";
        }
        cout<<endl;
    }
}