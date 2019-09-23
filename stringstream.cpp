vector<int> parseInts(string str) {
    
    stringstream ss(str);
    char ch;
    int a;
    vector<int> arr;
    int i=0;
    while(ss>>a){
        ss>>ch;
        arr.push_back(a); 
        i++;
    }
    
   

    

    return arr;

}