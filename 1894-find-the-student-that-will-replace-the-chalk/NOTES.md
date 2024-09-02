```
class Solution {
public:
int chalkReplacer(vector<int>& chalk, int k) {
int i = 0;
int ans = 0;
while (true){
if(chalk[i] <= k){
k = k - chalk[i];
i++;
if(i >= chalk.size()){
i = 0;
}
}
else{
ans = i;
break;
}
}
return ans;
}
};
```