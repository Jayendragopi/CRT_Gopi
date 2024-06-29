#include <iostream>
using namespace std;
int main() {
    
    int x,a;
    cin >>x;
    int p=0,c=0;
    while(x>0){
        cin >>a;
        if(a<0 && p==0){
            c+=1;
        }
        else if(a>=1){
            p+=a;
        }
        else{
            p-=1;
        }
        x--;
    }
    cout <<c;
 
    return 0;
}
