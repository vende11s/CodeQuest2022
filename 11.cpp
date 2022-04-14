#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int in(){
    int inX;
    cin>>inX;
    return inX;
}
bool is_letter(char &c){
    if(c>=65 && c<= 90) {c+=32; return true;}
    if(c>=97 && c<= 122)return true;
    return false;
}
int main(){
    cout.tie(0)->sync_with_stdio(0); //cout << fixed << setprecision(20);
    cout << fixed << setprecision(2);          
    vector<int> count (26);
    ll all_chars = 0;

    //reading
    vector<string> lines(in()+1);
    for(auto &i : lines){
        getline(cin,i);
    }

    //counting
    for(int i = 0; i < lines.size(); i++){
        for(int j = 0; j < lines[i].size(); j++){
            if(is_letter(lines[i][j])){
                count[lines[i][j]-97]++;
                all_chars++;
            }
        }
    }

    //printing
    for(int i = 0; i < count.size(); i++){
        float f = (float)count[i] / (float)all_chars;
        cout<<char(65+i)<<": "<<f*100<<"%\n";
    }

}

