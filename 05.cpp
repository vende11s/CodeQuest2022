#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int in(){
    int inX;
    cin>>inX;
    return inX;
}

bool sortin(pair<double,int> a, pair<double,int> b){
    return a.first<b.first;
}

int main(){
    cout.tie(0)->sync_with_stdio(0);

    int z(in());
    while(z--){
    //reading
    int n(in());
    vector<pair<int,int>> asteroids(n);
    for(auto &i : asteroids){
        i.first=in();
        i.second=in();
    }

    //calculating length of em all
    vector<pair<double,int>> len(n);
    for(int i = 0; i < n; i++){
        double d = sqrt(asteroids[i].first*asteroids[i].first + asteroids[i].second*asteroids[i].second);
        len[i] = {d,i};
    }
    sort(len.begin(), len.end(), sortin);

    for(auto i : len){
        cout<<asteroids[i.second].first<<" "<<asteroids[i.second].second<<endl;
    }
  }
}

