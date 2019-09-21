#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
string encryption(string s) {
    int size=s.size();
    int r,c,flag=0;
    
    float width = sqrt(size);
    cout<<width;
    for(int i=0;i<size/2;i++){
            if(i==width){
                flag=1;
                break;
            }
    }
    if(flag==0){
        r = width,c =width+1;
    }else{
        r=width;
        c=width;
    }
    if(r*c<size){
        r++;
    }
    int k=0;
    char arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(k>=s.size()){
                arr[i][j] =' ';
            }else{
                arr[i][j] = s[k++];
            }
           
        }
    }
    for(int i=0;i<r;i++)    {
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    //cout<<r<<c;
    char code[200];
   
    int t=0;
    for(int i=0;i<c;i++){
            for(int j=0;j<r;j++){
                if(arr[j][i]!=' ')
                    code[t++] = arr[j][i];
            }
            code[t++] =' ';
    }
    cout<<code;
    return code;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
