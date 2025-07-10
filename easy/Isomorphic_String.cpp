class Solution {
public:
    bool isIsomorphic(string s, string t) {
       vector<int>v1(128,-1); //ASCII characters range from 0 to 127 (i.e.128 total charac
       vector<int>v2(128,-1);
       if(s.length()!=t.length()){
        return false;
       } 
        for(int i=0;i<s.length();i++){      //  v1['a'] is the same as v1[97]
            if(v1[s[i]]!=v2[t[i]]){
                return false;
            }
            v1[s[i]]=v2[t[i]]=i;
        }
         return true;
    }
};
