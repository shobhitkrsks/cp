#include<bits/stdc++.h> 
using namespace std; 
  
int precedence(char c) 
{ 
    if(c == '^') 
    return 6; 
    else if(c == '*' || c == '/') 
    return 5; 
    else if(c == '+' || c == '-') 
    return 4; 
    else if(c == '>' || c == '<')
    return 3;
    else if(c == '&')
    return 2;
    else if(c == '|')
    return 1;
    else
    return -1; 
} 
  
string infixToPostfix(string s) 
{ 
    stack<char> st; 
    st.push('N'); 
    int l = s.length(); 
    string ns; 
    for(int i = 0; i < l; i++) 
    { 
          
        if((s[i] >= 'a' && s[i] <= 'z') ||  
           (s[i] >= 'A' && s[i] <= 'Z')) 
        ns+=s[i]; 
   
        else if(s[i] == '(') 
          
        st.push('('); 
          
        else if(s[i] == ')') 
        { 
            while(st.top() != 'N' && st.top() != '(') 
            { 
                char c = st.top(); 
                st.pop(); 
               ns += c; 
            } 
            if(st.top() == '(') 
            { 
                char c = st.top(); 
                st.pop(); 
            } 
        } 
          
        else{ 
            while(st.top() != 'N' && precedence(s[i]) <=  
                                   precedence(st.top())) 
            { 
                char c = st.top(); 
                st.pop(); 
                ns += c; 
            } 
            st.push(s[i]); 
        } 
  
    } 
    
    while(st.top() != 'N') 
    { 
        char c = st.top(); 
        st.pop(); 
        ns += c; 
    } 
      
    return ns;
  
} 

void TAC(string s)
{
    int i=0,c=1;
    stack<string> st;

    while(i<s.length())
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            string p = "";
            p.append(s,i,1);
            st.push (p);
        }
        else
        {
            string temp = "t",op1="",op2="",oper="";
            oper.append(s,i,1);
            op2 += st.top();
            st.pop();
            op1 += st.top();
            st.pop();
            temp += to_string(c);
            ++c;
            st.push(temp);
            cout<<temp<<" = "<<op1<<" "<<oper<<" "<<op2<<endl;
        }
        ++i;
    }
}
  
int main() 
{ 
    string expr = "a+b*(c^d-e)^(f+g*h)-i"; 
    string postfix = infixToPostfix(expr);
    TAC(postfix);
    return 0; 
} 