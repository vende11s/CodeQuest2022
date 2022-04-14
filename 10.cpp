#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int in(){
    int inX;
    cin>>inX;
    return inX;
}

string make_zeros(int len, string s){
    string output = "";
    for(int i = len; i>s.size(); i--) output+="0";
    output+=s;
    return output;
}

int main(){
    cout.tie(0)->sync_with_stdio(0);

    int z(in());
    while(z--){
        int i = 0;
        vector<string> args;
        string choice;
        string s;
        do {
            if(cin>>s){
                if(i==0)choice=s;
                else args.push_back(s);
            i++;
            }
        }while(cin && cin.peek() != '\n');

        if(choice=="formatHeight"){
            cout<<args[0]<<'\''<<args[1]<<"\"\n";
        }
        if(choice=="formatDate"){
            cout<<make_zeros(4,args[0])<<make_zeros(2,args[1])<<make_zeros(2,args[2])<<endl;
        }
        if(choice=="concatenate"){
            for(int i = 0; i < args.size(); i++){
                cout<<args[i];
                if(i!=args.size()-1)cout<<',';
            }
            cout<<'\n';
        }
    }
}

