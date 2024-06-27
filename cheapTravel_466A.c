#include <iostream>
using namespace std;
int main() {
    int n,m,a,b;
    int n_p,s_p;
    cin >> n>>m>>a>>b;
    n_p=n*a;
    s_p=(n/m)*b;
    int c=n%m;
    if(c*a<b){
        s_p+=c*a;
    }
   else{
       s_p+=b;
   }
   if(s_p<n_p){
       cout<< s_p;
   }
   else{
       cout<< n_p;
   }
 
    return 0;
}