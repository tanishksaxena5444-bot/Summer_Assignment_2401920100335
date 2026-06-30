
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
     int n = temperatures.size();
    vector<int> answer(n, 0);
    stack<int> st;  // store indices

    for (int i = 0; i < n; ++i) {
        while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
            int prevIndex = st.top();
            st.pop();
            answer[prevIndex] = i - prevIndex;  // wait time
        }
        st.push(i);  // add current index
    }

    return answer;
    }
};