class Solution {
public:
    
    bool to_check(string st)
    {
        int len = st.size();
        for(int j=0;j<len/2;j++)
        {
            if(st[j] != st[len-j-1])
            {
                return false;
            }
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        
        int n = s.size();
        int i = 0;
        int j = n-1;
        string x = "";
        while(i <= j)
        {
           if(s[i] != s[j])
           {
               x = s;
               s.erase(s.begin()+i);
               if( to_check(s) )
               {
                   return true;
               }
               x.erase(x.begin()+j);
               if( to_check(x))
               {
                   return true;
               }
               return false;
           }
            i++;
            j--;
        }
        return true;
    }
};
