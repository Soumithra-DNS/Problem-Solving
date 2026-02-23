#include <bits/stdc++.h>
using namespace std;

/* =================== BALANCED PARENTHESES =================== */
bool isBalanced(string s) {
    stack<char> st;
    for(char c : s) {
        if(c == '(' || c == '{' || c == '[') st.push(c);
        else {
            if(st.empty()) return false;
            char top = st.top();
            if((c == ')' && top == '(') ||
               (c == '}' && top == '{') ||
               (c == ']' && top == '[')) st.pop();
            else return false;
        }
    }
    return st.empty();
}

/* =================== POSTFIX EVALUATION =================== */
int evalPostfix(string s) {
    stack<int> st;
    for(char c : s) {
        if(isdigit(c)) st.push(c - '0');
        else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            switch(c) {
                case '+': st.push(a + b); break;
                case '-': st.push(a - b); break;
                case '*': st.push(a * b); break;
                case '/': st.push(a / b); break;
            }
        }
    }
    return st.top();
}

/* =================== PREFIX EVALUATION =================== */
int evalPrefix(string s) {
    stack<int> st;
    for(int i = s.size()-1; i >= 0; i--) {
        char c = s[i];
        if(isdigit(c)) st.push(c - '0');
        else {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            switch(c) {
                case '+': st.push(a + b); break;
                case '-': st.push(a - b); break;
                case '*': st.push(a * b); break;
                case '/': st.push(a / b); break;
            }
        }
    }
    return st.top();
}

/* =================== INFIX TO POSTFIX =================== */
int precedence(char op) {
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
    return 0;
}

string infixToPostfix(string s) {
    stack<char> st;
    string res;
    for(char c : s) {
        if(isalnum(c)) res += c;
        else if(c == '(') st.push(c);
        else if(c == ')') {
            while(!st.empty() && st.top() != '(') { res += st.top(); st.pop(); }
            st.pop(); // pop '('
        } else {
            while(!st.empty() && precedence(st.top()) >= precedence(c)) {
                res += st.top(); st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()) { res += st.top(); st.pop(); }
    return res;
}

/* =================== MAIN FUNCTION =================== */
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string expr;

    // Balanced parentheses check
    expr = "([{}])";
    cout << "Expression: " << expr << "\n";
    cout << (isBalanced(expr) ? "Balanced\n" : "Not Balanced\n");

    // Infix to Postfix conversion
    expr = "(2+3)*4";
    string postfix = infixToPostfix(expr);
    cout << "Infix: " << expr << "\n";
    cout << "Postfix: " << postfix << "\n";

    // Postfix evaluation
    string postExpr = "23+4*"; // equivalent to (2+3)*4
    cout << "Postfix Evaluation: " << evalPostfix(postExpr) << "\n";

    // Prefix evaluation
    string preExpr = "*+234"; // equivalent to (2+3)*4
    cout << "Prefix Evaluation: " << evalPrefix(preExpr) << "\n";

    return 0;
}