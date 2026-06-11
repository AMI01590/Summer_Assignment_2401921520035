class Solution {
public:
    string decodeString(string s) {
        stack<int> countStack;
        stack<string> stringStack;

        int currNum = 0;
        string currStr = "";

        for (char ch : s) {

            if (isdigit(ch)) {
                currNum = currNum * 10 + (ch - '0');
            }

            else if (ch == '[') {
                countStack.push(currNum);
                stringStack.push(currStr);

                currNum = 0;
                currStr = "";
            }

            else if (ch == ']') {
                int repeatCount = countStack.top();
                countStack.pop();

                string prevStr = stringStack.top();
                stringStack.pop();

                string temp = "";

                for (int i = 0; i < repeatCount; i++) {
                    temp += currStr;
                }

                currStr = prevStr + temp;
            }

            else {
                currStr += ch;
            }
        }

        return currStr;
            
    }
};
