class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for (int i=0;i<tokens.size();i++) {
            if (tokens[i]=="+") {
                int b=s.top();
                s.pop();
                int a=s.top();
                s.pop();
                int result=a+b;
                s.push(result);
            }
            else if (tokens[i]=="-") {
                int b=s.top();
                s.pop();
                int a =s.top();
                s.pop();
                int result=a-b;
                s.push(result);
            }
            else if (tokens[i]=="*") {
                int b=s.top();
                s.pop();
                int a=s.top();
                s.pop();
                int result=a*b;
                s.push(result);
            }
            else if (tokens[i]=="/") {
                int b=s.top();
                s.pop();
                int a=s.top();
                s.pop();
                int result=a/b;
                s.push(result);
            }
            else {
                int num=stoi(tokens[i]);
                s.push(num);
            }
         }
        return s.top();
    }
};