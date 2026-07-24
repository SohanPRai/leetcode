class Solution {
public:
    bool canConstruct(string r, string ma) {
        unordered_map<char,int>m;
        for(int j=0;j<ma.size();j++)
        {
          m[ma[j]]++;
        }
        for(int i=0;i<r.size();i++)
        {
          m[r[i]]--;
          if(m[r[i]]<0){
            return false;
          }
        }
        
      
        return true;
    }
};