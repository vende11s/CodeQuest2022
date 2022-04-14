#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int in(){
    int inX;
    cin>>inX;
    return inX;
}
vector<int> two_points = {-15,-13,-11,-10,-8, 1, 5, 12};
int main(){
    cout.tie(0)->sync_with_stdio(0); //std::cout << std::fixed << std::setprecision(20);
    int n(in());

    while(n--){
        int team(in()), enemy(in());
        if(find(two_points.begin(), two_points.end(), team-enemy) != two_points.end()){
            cout<<"2\n";
        }else cout<<"1\n";
    }
}

