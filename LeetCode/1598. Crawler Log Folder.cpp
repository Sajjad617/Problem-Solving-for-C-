class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;

        for(string x : logs)
        {
            if(x=="../"){
                if(!st.empty())
                    st.pop();
            }
            else if(x == "./")
                continue;

            else
                st.push(x);
        }
        return st.size();
    }
};