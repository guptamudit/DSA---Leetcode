class TrieNode {
public:
    TrieNode* children[26] = {nullptr};
    int count = 0;
};

class PrefixTree {
public:
    TrieNode* root;

    PrefixTree() {
        root = new TrieNode();
    }

    void insert(const std::string& word) {
        TrieNode* cur = root;
        for (char c : word) {
            int index = c - 'a';
            if (!cur->children[index]) {
                cur->children[index] = new TrieNode();
            }
            cur = cur->children[index];
            cur->count++;
        }
    }

    int getScore(const std::string& word) {
        TrieNode* cur = root;
        int score = 0;
        for (char c : word) {
            int index = c - 'a';
            cur = cur->children[index];
            score += cur->count;
        }
        return score;
    }
};

class Solution {
public:
    std::vector<int> sumPrefixScores(std::vector<std::string>& words) {
        std::vector<int> res(words.size());
        PrefixTree prefixTree;

        for (const std::string& word : words) {
            prefixTree.insert(word);
        }

        for (int i = 0; i < words.size(); i++) {
            res[i] = prefixTree.getScore(words[i]);
        }

        return res;
    }
};