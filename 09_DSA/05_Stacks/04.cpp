// hello world from mars     reverse using stack dsa to reverse in c++
#include<iostream>
#include<string>
#include<stack>
using namespace std;

void reverseSentence(string s)
{
    stack<string> st;
    for(int i = 0; i < s.size(); i++){
        string word = "";

        while(s[i] != ' ' && i < s.length()){
            word += s[i];
            i++;
        }
        if(!word.empty())
            st.push(word);
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main(){
    string s;
    getline(cin, s);
    reverseSentence(s);
    return 0;
}