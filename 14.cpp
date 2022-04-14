#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int in(){
    int inX;
    cin>>inX;
    return inX;
}

void decode(char &c, int move, bool direction){
    if(direction){
        c-=move;
        while(c<65){
            c = 90-abs(65-c);
        }
    }else {
        c+=move;
        while(c>90){
            c = 64+abs(90-c);
        }
    }
    c+=32;
}

bool is_valid(char c){
    return c>=65 && c<=90;
}

int main(){
    cout.tie(0)->sync_with_stdio(0); //std::cout << std::fixed << std::setprecision(20);
    int n(in());
    while(n--){
    string s;

    do{
        static int i(0);
        string z;
        if(cin>>z) s+=(!i ? "" : " ") + z;
        i++;
    }while(cin && cin.peek() != '\n');

    vector<int>sequence_move;
    do{
        int a;
        if(cin>>a)
        sequence_move.push_back(a);
    }while(cin && cin.peek() != '\n');

    vector<bool>sequence_dir;
    do{
        int a;
        if(cin>>a)
        sequence_dir.push_back(a);
    }while(cin && cin.peek() != '\n');

    for(int i = 0, j = 0; i<s.size(); i++,j++){
        if(is_valid(s[i]))decode(s[i],sequence_move[j%sequence_move.size()],sequence_dir[j%sequence_dir.size()]);
        else j--;
    }
    cout<<s<<endl;
  }
}

