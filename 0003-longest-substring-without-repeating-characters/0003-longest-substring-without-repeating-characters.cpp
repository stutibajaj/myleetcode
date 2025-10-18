class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0;
        map<char,int>m;
        int ml = 0;
        for(int r = 0;r<n;r++){
            m[s[r]]++;
            cout << r << ' ';
            while(m[s[r]] > 1){
                cout << l <<  ' '; 
                m[s[l]]--;
                l++;
            }
            cout << endl;
            ml = max(ml , r-l+1);
        }
        return ml;
    }
};