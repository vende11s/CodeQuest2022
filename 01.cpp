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
        int a(in());
        cout<<(a%2==0 ? "EVEN" : "ODD" )<<endl;
    }
}

