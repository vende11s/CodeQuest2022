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
    int n(in());
    while(n--){
        string s; cin>>s;
        ll sum = 0;

        for(int i = 0; i < s.size(); i++){
            sum+=s[i]-96;
        }
        cout<<sum<<endl;
    }
}

