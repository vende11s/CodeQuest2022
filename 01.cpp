#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int in(){
int inX;
    cin>>inX;
return inX;
}

int main()
{
    int z(in());
    while(z--){
        int b = in();
        cout<<(b%2==0 ? "EVEN\n" : "ODD\n");
    }
}
