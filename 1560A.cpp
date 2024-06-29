#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
    int t;
   cin>>t;
   while(t--){
       int x;
       cin>>x;
       int i=1;
       int count=0;
       while(1){
        if(i%3!=0 && i%10!=3){
            count++;
            if(count==x){
                cout<<i<<endl;
                break;
            }
        }
        i++;
    }
 
   }
 
    return 0;
}