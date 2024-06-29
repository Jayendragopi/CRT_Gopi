// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    string o_username="gopi";
    string o_pass="gopi123";
    string user;
    string pass;
    int max=3;
    int att=0;
    while(att<max){
        cout<<"enter username:\n";
        cin>>user;
        cout<<"enter password:\n";
        cin>>pass;
        if(o_username!=user){
            cout<<"inavlid username";
        }
        else if(o_username==user && pass!=o_pass){
            att++;
            cout<<"pass is worng u have"<< max-att <<"attempts\n";
        }
        else if(o_username==user && o_pass==pass){
            cout<<"login successfully";
            break;
        }
    }
    if(att>=max){
    cout<<"max attempts reaced account blocked";
    }

    return 0;
}