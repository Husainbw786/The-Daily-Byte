class Solution {
public:
    string addBinary(string a, string b) {
        
        int n = a.size();
        int m = b.size();
        int i = n-1;
        int j = m-1;
        string s = "";
        int sum = 0;
        int carry = 0;
        
        while(i >= 0 || j >= 0 || carry != 0)
        {
            sum = carry;
            if(i >= 0)
            {
                sum += a[i] - '0';
            }
            if(j >= 0 )
            {
                sum += b[j] - '0';
            }
            s += to_string((sum) % 2);
            carry = sum / 2;
            i--;
            j--;
        }
        
        reverse(s.begin(),s.end());
        return s;
    }
};
