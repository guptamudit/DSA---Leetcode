```
class Solution {
public:
int maximumSwap(int num) {
string numstr = to_string(num);
string t = numstr;
for(int i=0;i<t.size();i++){
for(int j=i+1;j<t.size();j++){
swap(t[i],t[j]);
int m = stoi(t);
num = m > num ? m : num;
t = numstr;
}
}
return num;
}
};
```