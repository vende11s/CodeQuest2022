#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int in(){
    int inX;
    cin>>inX;
    return inX;
}
//UNDONE
int main(){
    cout.tie(0)->sync_with_stdio(0); //cout << fixed << setprecision(20);
    int z(in());
while(z--){
    int L(in()), C(in()), N(in());

    int cykl=0, deep=0;
    int c = 0;

    int deep_temp=0;

    for(int i = 0; i < L+1; i++){
        string s;
        getline(cin, s);

        if(s.substr(0,2)=="If"){
            cykl+=2;
            if(c==0)cykl--; 
            c=2;
        }
        c--;
        if (s[0] == '{'){
            if (deep_temp < 0) deep_temp = 0;
            deep_temp++;

            deep=max(deep_temp, deep);
        }

        if(s[0]=='}')deep_temp--;
    }
    cout<<cykl<<" "<<deep<<(cykl<=C and deep<=N ? " PASS" : " FAIL")<<endl;
}
}

