class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int n = words.size();
        vector<string> answer;

        for(int i=0; i<n; i++)
        {
            int len = words[i].length();
            int a=0, b=0, c=0;
            for(int j=0; j<len; j++)
            {
                char ch = words[i][j];
                if(ch == 'q' || ch == 'w' || ch == 'e' || ch == 'r' || ch == 't' || ch == 'y' || ch == 'u' || ch == 'i' || ch == 'o' || ch == 'p'
                 || ch == 'Q' || ch == 'W' || ch == 'E' || ch == 'R' || ch == 'T' || ch == 'Y' || ch == 'U' || ch == 'I' || ch == 'O' || ch == 'P')
                {
                    a++;
                }
                else if(ch == 'a' || ch == 's' || ch == 'd' || ch == 'f' || ch == 'g' || ch == 'h' || ch == 'j' || ch == 'k' || ch == 'l'
                 || ch == 'A' || ch == 'S' || ch == 'D' || ch == 'F' || ch == 'G' || ch == 'H' || ch == 'J' || ch == 'K' || ch == 'L')
                {
                    b++;
                }
                else if(ch == 'z' || ch == 'x' || ch == 'c' || ch == 'v' || ch == 'b' || ch == 'n' || ch == 'm'
                 || ch == 'Z' || ch == 'X' || ch == 'C' || ch == 'V' || ch == 'B' || ch == 'N' || ch == 'M')
                {
                    c++;
                }
            }

            if(a == len || b == len || c == len)
            {
                answer.push_back(words[i]);
            }
        }

        return answer;
    }
};