class Solution {
public:
    int minLength(string s) {
      
      stack<int> stk;

      for(int i : s){ 

        if(!stk.empty()){
         if(stk.top() == 'A' && i == 'B' || stk.top() == 'C' && i == 'D') stk.pop();
         else stk.push(i);
        }
        else stk.push(i);

      }

      return stk.size();
    }
};