#include<iostream>
using namespace std;

string moveHash(string s){
    string ans = "";
    for(auto i:s){
        if(i == '#'){
            ans = "#" + ans;
        }
        else{
            ans += i;
        }
    }
    return ans;
}

int main(){
    string str;
    cout<<"Enter String" <<"\n";
    getline(cin, str);
    cout<<"Output String: "+ moveHash(str) <<"\n";
}
