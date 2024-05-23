#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n = 286533;

    int count = 0;
    //method 1
    // while(n != 0){
    //     count++;
    //     n = n/10;
    // }
    
    //method 2
    count = (int)(log10(n)+1);

    cout<<count<<endl;
}