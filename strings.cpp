#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1,s2;
    cin>>s1>>s2;

    cout<<s1.size()<<" "<<s2.size();
    cout<<endl<<s1+s2<<endl;
    
    char s3;
    s3 = s1[0];
    s1[0] = s2[0];
    s2[0] = s3;
   

    
     
cout<<s1<<" "<<s2;
    


  
    return 0;
}

