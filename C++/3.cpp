#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long  t,n,i,j,max;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        while((n%2)==0){
            max=2;
            n=n/2;
            
        }
        
        for(j=3;j<=sqrt(n);j+=2){
            while((n%j)==0){
                max=j;
                n=n/j;
                
                
            }
            
            
            
        }
        if(n>2){
                max=n;
            }
        
       cout<<max<<"\n"; 
        
    }
    
    return 0;
}

