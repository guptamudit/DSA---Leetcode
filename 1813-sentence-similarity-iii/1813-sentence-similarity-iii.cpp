class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        // sentence 1 length should be greater than or equal to sentence 2 because we are
        // searching for sentence2 in sentence 1 in either prefix or suffix
        if(sentence1.size()<sentence2.size())
        return areSentencesSimilar(sentence2,sentence1);

        // we will make two deque to store each words of both sentences
        deque<string> deq1;
        deque<string> deq2;

        // now we will split both sentences into words
        stringstream str1(sentence1);
        string temp;

        while(str1 >> temp)
        deq1.push_back(temp);

        stringstream str2(sentence2);
        while(str2 >> temp)
        deq2.push_back(temp);

        // now will match prfix and suffix of both sentence and pop similar words from deq2
        
        while(!deq1.empty() && !deq2.empty() && deq1.front()==deq2.front())
        {
            deq1.pop_front();
            deq2.pop_front();
        }

        while(!deq1.empty() && !deq2.empty() && deq1.back()==deq2.back())
        {
            deq1.pop_back();
            deq2.pop_back();
        }

        // if deq2 becomes empty return true else return false
        return deq2.empty();
    }
};