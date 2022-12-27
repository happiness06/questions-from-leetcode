#include<iostream>
using namespace std;
#include<string>

void is_subseq(string a, string b){
    int count =0;
    for(int i=0; i<a.size(); i++){
        for(int j=0; j<b.size(); j++){
            if(a[i]==b[j])
            count += 1;
        }
    }
    if(count==a.size())
    cout<<"True"<<endl;
    else cout<<"False"<<endl;
    
}
int main(){
    string s = "axc";
    string t = "ahbgdc";
    is_subseq(s, t);
    return 0;
}