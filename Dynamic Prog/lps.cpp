Problem url- https://leetcode.com/problems/longest-palindromic-substring/

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if (n<=1) return s;
        int maxlen=1;
        int start=0;
        bool table[n][n];
        memset(table, 0, sizeof(table));
        for(int i=0;i<n;i++)
            table[i][i]= true;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
               table[i][i+1]= true;
               start=i;
               maxlen=2;
            }
        }
        for(int k=3;k<=n;k++){
            for(int i=0;i<n-k+1;i++){
                int j=i+k-1;
                if(s[i]==s[j] && table[i+1][j-1]){
                    table[i][j]=true;
                    if(k>maxlen){
                        start=i;
                        maxlen=k;
                    }
                }
    }
}
        return s.substr(start,maxlen);
    }   
};