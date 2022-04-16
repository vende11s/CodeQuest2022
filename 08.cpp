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
    cout << fixed << setprecision(2);
    
    int z(in());
    while(z--){

    int n(in()),m(in());

    ll sum = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int b = in();
            sum+=b*b;
        }
    }    
    double jd = sqrt(sum);
    cout<<jd<<endl;
   }
}

