#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int in(){
    int inX;
    cin>>inX;
    return inX;
}

int main(){
    cout.tie(0)->sync_with_stdio(0); //cout << fixed << setprecision(20);
    float c1(in()), c2(in()), c3(in()), c4(in());
    float f1(in()), f2(in());

    int div = c1*c4 - c2*c3;

    c1 = c1/div;
    c2 = (c2*-1)/div;
    c3 = (c3*-1)/div;
    c4 = c4/div;
    swap(c1,c4);

    float e1 = c1*f1 + c3*f2;
    float e2 = c2*f1 + c4*f2;

    cout<<e1<<" "<<e2<<endl;

}

