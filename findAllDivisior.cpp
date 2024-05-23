#include<iostream>
using namespace std;

int main(){
    int n = 36;

    //O(sqrt(n))
    for(int i=1; i*i<=n; /*i<=sqrt(n)*/ i++){
        if(n%i == 0){
            //print from starting and ending both
            cout << i << " ";
            /*edge case*/
            if(n/i != i){ //why? when n/i = i , i is counted twice
                cout << n/i << " ";
            }
        }
    }
}