
//This question is asked by Amazon. Given a string representing the sequence of moves a robot vacuum makes, return whether or not it will return to its original position. The string will only contain L, R, U, and D characters, representing left, right, up, and down respectively.

Ex: Given the following strings...

"LR", return true
"URURD", return false
"RUULLDRD", return true



class Solution {
public:
    bool judgeCircle(string s) {
        
        int i,up_down = 0,right_left = 0;
        for(i=0;i<s.length();i++)
        {
            if(s[i] == 'U')
            {
                up_down++; 
            }
            else if(s[i] == 'D')
            {
                up_down--;
            }
            else if(s[i] == 'R')
            {
                right_left++;
            }
            else if(s[i] == 'L')
            {
                right_left--;
            }
        }
        
      
        if(right_left == 0 && up_down == 0)
        {
            return true;
        }
        else 
        {
            return false;
        }       
    }
};
   {
       cout << "false";
   }
   
   return 0;
}
