class Solution {
public:
bool isVovel(char c){
if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' ||c=='I' ||c=='O' ||c=='U' ){
    return true;
}
else{
    return false;
}
}

string swap(string& s,int a,int b){
    char temp=s[a];
    s[a]=s[b];
    s[b]=temp;
    return s;

}
    string reverseVowels(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j)
        {
            if( isVovel(s[i]) && isVovel(s[j]) ){
                swap(s,i,j);
                i++;
                j--;
            }
            else if(!isVovel(s[i])){
                i++;
            }
            else if(!isVovel(s[j])){
                j--;
            }
        }

        return s;
    }

};