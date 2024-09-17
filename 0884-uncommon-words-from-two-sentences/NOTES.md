```
class Solution {
public:
vector<string> uncommonFromSentences(string s1, string s2) {
// Concatenate the two sentences with a space in between
string word = s1 + " " + s2;
​
// Unordered map to store word frequency
unordered_map<string, int> map;
string tmp = "";
​
// Traverse the combined word (sentence) and count word occurrences
for (auto& ch : word) { // Iterate over each character in the sentence
if (ch == ' ') {
if (!tmp.empty()) { // If a word has been formed (not empty)
map[tmp]++;
tmp = ""; // Reset the tmp to start collecting a new word
}
} else {
tmp += ch; // Append the character to form the word
}
}
​
// Add the last word (if any) to the map
if (!tmp.empty()) {
map[tmp]++;
}
​
// Vector to store words that appear exactly once
vector<string> result;
for (const auto& entry : map) {
if (entry.second == 1) { // Check if the word appeared exactly once
result.push_back(entry.first); // Add it to the result vector
}
}
​
return result;
}
};
```