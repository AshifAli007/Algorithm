#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin>>a>>b;
    char* str[10] ={"null","one","two","three","four","five","six","seven","eight","nine"};
   // cout<<"Hii";
    for(int i=a;i<=b;i++){
        if(i<=9&&i>=1){
            cout<<str[i]<<endl;
        }else if(i>9){
            if(i%2==0){
                cout<<"even\n";
            }else{
                cout<<"odd\n";
            }
        }
    }
    return 0;
}