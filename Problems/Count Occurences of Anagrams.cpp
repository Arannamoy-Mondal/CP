class Solution {
public:
    int search(string pat, string txt) {
        vector<int>mpp(26, 0),mpf(26, 0);
        int k = pat.size(), n = txt.size();
        for (int i=0;i<k;i++) 
        {
            mpp[pat[i] - 'a']++;
        }
        for (int i=0;i<k;i++) 
        {
            mpf[txt[i] - 'a']++;
        }
        int cnt = 0;
        if (mpp==mpf) cnt++;
        for (int i = 1; i <= n-k; i++) 
        {
            mpf[txt[i+k-1]-'a']++;
            mpf[txt[i-1]-'a']--;
            if (mpp==mpf) cnt++;
        }
        return cnt;
    }
};