class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        int i = 0;
        if(s.size() == 0){
            return true;
         }
    while(i<s.size()){
            if( s[i] == '(' || s[i] == '[' || s[i] == '{' ){
                stack.push(s[i]);
            }
            else if(s[i]=='}' && !stack.empty() && stack.top()=='{'||
                    s[i]==']' && !stack.empty() && stack.top()=='['||
                    s[i]==')' && !stack.empty() && stack.top()=='('){
                stack.pop();
            }
            else{
                return false;
            }
            i++;
    }
    if(stack.empty()) {
            return true;}

            return false;
    }

};