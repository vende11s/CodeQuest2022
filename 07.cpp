#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int in(){
    int inX;
    cin>>inX;
    return inX;
}

array<int,11> cash = {10000,5000,2000,1000,500,200,100,25,10,5,1};

int main(){
    cout.tie(0)->sync_with_stdio(0);
    int n(in());
    while(n--){
        float f; cin>>f; f*=100;
        int m = f;
        string output="";
        for(int i = 0; i < cash.size(); i++){
            output+=to_string(m/cash[i]);
            m-=(m/cash[i])*cash[i];
        }
        cout<<output<<endl;
    }
}

