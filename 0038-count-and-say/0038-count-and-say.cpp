class Solution {
public:
    string countAndSay(int n) {
        if( n == 1 ) return "1";

        // 1) Get say 
        string say = countAndSay(n-1);

        // 2) Process say 
        string result = "";
        for( int i = 0 ; i < say.size() ; i++ )           
        {
            char ch = say[i];
            int count = 1;
            while( i < say.size()-1 && say[i] == say[i+1] ) // i < say.size()-1 as we will check i+1
            {
                count++;
                i++;
            }

            result += to_string(count)+string(1,ch);
        }
        return result;
    }
};