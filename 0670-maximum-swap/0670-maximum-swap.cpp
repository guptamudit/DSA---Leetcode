class Solution {
public:
    int maximumSwap(int num) {
        priority_queue<char> pq; 
        int i = 0; //to iterate in string
        string x = to_string(num);
        
        for(auto it : x){
            pq.push(it);
        }
            
        for(auto &it : x){
            if(it == pq.top()){
                pq.pop();
            }
            else{
                size_t p = x.rfind(pq.top());
                swap(x[i],x[(int)p]);
                return stoi(x);
            }
            
            i++;
        }
        return num;
    }
};