//lc 2042
class Solution {
public:
    bool areNumbersAscending(string s) {
        stringstream ss(s);
        string token;
        int prev=-1;
        while(ss>>token){// extract each string as a token
            if(isdigit(token[0])){//just check first char of each token
                int curr=stoi(token);
                if(curr<=prev)return false;
                prev=curr;
            }
        }
        return true;
    }
};
