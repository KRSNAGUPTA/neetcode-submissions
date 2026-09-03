class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(int i = 0; i < details.size();i++){
            string pas = details[i];
            int age = stoi(pas.substr(11,2));
            cout<<age<<" ";
            if(age >60){
                count++;
            }
        }
        return count;
    }
};