class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>m;
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
         for(int j=0;j<s.size();j++)
        {
            m[t[j]]--;
        }
       for(auto x : m)
{
    if(x.second!=0){
        return false;
    }
}
return true;
    }
};