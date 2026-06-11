class Solution {
public:
    string decodeString(string s) {
        stack<string> strStack;
    stack<int> numStack;
    string currentStr = "";
    int num = 0;

    for (char c : s) {
        if (isdigit(c)) {
            num = num * 10 + (c - '0');  // build the full number
        }
        else if (c == '[') {
            numStack.push(num);
            strStack.push(currentStr);
            num = 0;
            currentStr = "";
        }
        else if (c == ']') {
            string temp = strStack.top(); strStack.pop();
            int repeat = numStack.top(); numStack.pop();
            while (repeat--) {
                temp += currentStr;
            }
            currentStr = temp;
        }
        else {
            currentStr += c;
        }
    }

    return currentStr;
    }
};