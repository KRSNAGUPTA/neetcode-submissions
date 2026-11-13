class Solution {
public:
    int appendCharacters(string s, string t) {
        int i= 0 ;
        int j = 0;

        int m = s.size();
        int n = t.size();
        if(m == 1 && n == 1){
            if(s[0] == t[0]) return 0;
            return 1;
        }
        while(i < m && j < n){
            if(s[i] == t[j]){
                i++;
                j++;
            }else{
                i++;
            }
        }

        if(j == n) return 0;
        cout<<n<<" "<<j;
        return n-j;
    }
};