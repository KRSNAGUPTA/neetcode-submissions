#include<iostream>
using namespace std;
class Solution {
    private:
    string enc(string str){
        int n = str.size();

        return to_string(n)+"#"+str;
    }
public:
    string encode(vector<string>& strs) {
        int n = strs.size();
        string ans = "";
        for(auto str: strs){
            ans+= enc(str);
        }
        return ans;
    }

    vector<string> decode(string s) {
        int n = s.size();
        string curr = "";
        vector<string>ans;
        for(int i = 0 ; i < n; i++){
            string num ="";
            while(i<n && isdigit(s[i])){
                num+=s[i];
                i++;
            }
            if(num.size()!= 0 && s[i] == '#'){
                int len = stoi(num);
                string str = s.substr(i+1, len);
                ans.push_back(str);
                i+=len;
            }
        }
        return ans;
    }
};
