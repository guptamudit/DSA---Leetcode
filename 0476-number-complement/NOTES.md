```
class Solution {
public:
int findComplement(long num) {
for(int i = 1; i <= num; i *= 2 ){
num ^= i;
}
return num;
}
};
```