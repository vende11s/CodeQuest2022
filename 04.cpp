#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int in(){
    int inX;
    cin>>inX;
    return inX;
}

int main(){
    cout.tie(0)->sync_with_stdio(0);
    int z(in());
    while(z--){
        string number; cin>>number;
        string s; cin>>s;

        if(s=="PARENTHESES"){
            number.insert(0,"(");
            number.insert(4,")");
            number.insert(5," ");
            number.insert(9,"-");
        }
        if(s=="DASHES"){
            number.insert(3,"-");
            number.insert(7,"-");
        }
        if(s=="PERIODS"){
            number.insert(3,".");
            number.insert(7,".");
        }
        cout<<number<<endl;
    }
}

