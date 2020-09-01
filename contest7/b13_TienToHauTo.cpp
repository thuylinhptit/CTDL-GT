#include<bits/stdc++.h> 
#define ll long long 
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

string Infix(string s){
    int n = s.length();
    stack<string> stk;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/'){
            string t1 = stk.top(); stk.pop();
            string t2 = stk.top(); stk.pop();
            string t = "(" + t1 + s[i] + t2 + ")";
            stk.push(t);
        }
        else{
            string t = "";
            t = t + s[i];
            stk.push(t);
        }
    }
    return stk.top();
}
int Calculation(char a){
    if(a == '^') return 3;
    if(a=='*' or a=='/') return 2;
    if(a=='+' or a=='-') return 1;
    return 0;
}

string Postfix(string s){
    stack<char> stk;
    string t = "";
    for(int i=0;i<s.length();i++){
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')) t = t + s[i];
        else {
                if(s[i]=='(') stk.push(s[i]);
                else if(s[i]==')'){
                    while(!stk.empty() && stk.top()!='('){
                        t = t + stk.top();
                        stk.pop();
                    }
                    stk.pop();
                }
                else if(!stk.empty() && Calculation (stk.top())>=Calculation(s[i])){
                    while(!stk.empty() && Calculation (stk.top())>=Calculation(s[i])){
                        t = t + stk.top();
                        stk.pop();
                    }
                    stk.push(s[i]);
                }
                else stk.push(s[i]);
            } 
    }
    while(!stk.empty()){
        if(stk.top() != '(') t = t + stk.top();
        stk.pop();
    }
    return t;
}
void Res(){
    string s;
    cin>>s;
    s = Infix(s);
    s = Postfix(s);
    cout<<s<<endl;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        Res();
    }
}
