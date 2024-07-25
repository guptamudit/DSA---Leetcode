class Solution {
public:
    bool checkequal(int a[26], int b[26]){
        for(int i = 0; i<26; i++){
            if(a[i] != b[i])
                return 0;
        }
        return 1;
    }
    bool checkInclusion(string s1, string s2) {
        //char count array
        int n1 = s1.length();
        int count1[26] = {0};
        for(int i = 0; i < n1 ; i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }
        
        //traverse s2 string in window of size s1 and compare
        
        int i = 0;
        int windowSize = n1;
        int count2[26] ={0};
        
        //run for first window
        while(i < windowSize && i<s2.length()){
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }
        
        if(checkequal(count1, count2))
            return 1;
        
        //aage ki window check
        while(i<s2.length()){
            char newchar = s2[i];
            int index = newchar - 'a';
            count2[index]++;
            
            char oldchar = s2[i - windowSize];
            index = oldchar - 'a';
            count2[index]--;
            
            i++;
            
            if(checkequal(count1, count2))
            return 1;
            
        }
        return 0 ;
        
    }
};