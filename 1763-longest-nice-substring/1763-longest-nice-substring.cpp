
class Solution {
public:
    string longestNiceSubstring(string s) {
        
        // if length is less than 2 return empty        
        if(s.length()<2) return "";
        
        // make a set to search for respective lowercase and uppercase
        unordered_set<char> temp;
        
        // insert values
        for(int i=0 ; i<s.length() ; i++)
        {
            temp.insert(s[i]);
        }

        // iterate through the loop
        for(int i=0 ; i<s.length() ; i++)
        {
            // check if current string is nice
            if(temp.count(tolower(s[i]))==true && temp.count(toupper(s[i]))==true)
            {
                continue;
            }

            /* divide the string on the character which does 
                not have a respective character */
            string priv=longestNiceSubstring(s.substr(0,i));
            string next=longestNiceSubstring(s.substr(i+1));
            
            // return longer string
            return (priv.length()>=next.length())? priv:next;
        }

        // return string
        return s;
    }
};
