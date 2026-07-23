// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     string a="abby";
//     string b="abb";
//     vector<int> freqa(128,0);
//     vector<int> freqb(128,0);
//     for(char x:a){
//         freqa[x]++;
//     }
//     for(char x:b){
//         freqb[x]++;
//     }
//     for(int i=0;i<128;i++){
//         if(freqb[i]<freqa[i]){
//             cout<<"false";
//             return 0;
//         }
//     }
//     cout<<"true";
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
int main(){
    string a="abby";
    string b="abb";
    vector<int> freqa(128,0);
    vector<int> freqb(128,0);
    for(char x:a){
        freqa[x]++;
    }
    for(char x:b){
        freqb[x]++;
    }
    for(int i=0;i<128;i++){
        if(freqb[i]<freqa[i]){
            cout<<"false";
            return 0;
        }
    }
    cout<<"true";
    return 0;
}
