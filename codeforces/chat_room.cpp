#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    string t = "hello";
    cin >> s;

    int p1 = 0;
    int p2 = 0;

    while(p1<s.size() && p2<t.size()){
        if(s[p1] != t[p2]){
            p1++;
        }
        else{
            //cout<<s[p1];
            p1++;
            p2++;
        }
    }
    //cout<<""<<endl;
    //cout<<t.size()<<" "<<p2;

    if(t.size() > p2){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }

}