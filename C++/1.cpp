#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long t, n,i,j,count;
    
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        n=n-1;
        count = (3*((n/3)*((n/3)+1)))+(5*((n/5)*((n/5)+1)))-(15*((n/15)*((n/15)+1)));
        cout<<count/2<<"\n";
        
    }
    return 0;
}
