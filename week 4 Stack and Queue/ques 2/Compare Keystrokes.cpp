class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char>st1,st2;
        
        int i;
        int n = s.size();
        for(i=0;i<n;i++)
        {
            if(s[i] != '#')
            {
                st1.push(s[i]);
            }
            else
            {
                if(st1.size() != 0)
                {
                  st1.pop();  
                }
                
            }
        }
        int m = t.size();
         for(i=0;i<m;i++)
         {
            if(t[i] != '#')
            {
                st2.push(t[i]);
            }
            else
            {
                if(st2.size() != 0)
                {
                  st2.pop();  
                }
                
            }
        }
        if(st1.size() != st2.size())
        {
            return false;
        }
        while(! st1.empty())
        {
            if(st1.top() == st2.top())
            {
                st1.pop();
                st2.pop();
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
