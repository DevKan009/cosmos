class Solution {
public:
    bool isAlphanumeric (char ch){
            return (('a'<=ch&& ch<='z')||('A'<=ch&& ch <= 'Z') || ('0'<=ch && ch<='9'));
        }
    bool isPalindrome(string s) {
        
            int st = 0, en = (s.size() - 1);
            while(st<=en){
                if(!isAlphanumeric(s[st])){
                    st++;
                    continue;
                }
                 if(!isAlphanumeric(s[en])){
                    en--;
                    continue;
                }
                if(tolower(s[st])!=tolower(s[en])){
                       return false;
                }
                st++;en--;

            } 
            return true;

        
    }
};
