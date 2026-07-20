#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s="Lionel Messi";
    stack <char> st;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    return 0;
}