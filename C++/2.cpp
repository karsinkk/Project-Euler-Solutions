#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long t,n,i,a[2],count,tmp;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        a[0]=1;
        a[1]=2;
        while(a[1]<n){
            if((a[1]%2)==0){
                count+=a[1];
            }
            tmp=a[1];
            a[1]+=a[0];
            a[0]=tmp;
            
        }
        cout<<count<<"\n";
        count=0;
        
        
        
        
    }
    return 0;
}
