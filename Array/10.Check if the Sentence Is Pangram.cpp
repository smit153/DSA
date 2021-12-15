class Solution {
public:
    bool checkIfPangram(string sentence) {
    vector<bool> mark(26, false);
    int index;
    for (int i = 0; i < sentence.length(); i++) {
       if ('A' <= sentence[i] && sentence[i] <= 'Z')
            index = sentence[i] - 'A';
        else if ('a' <= sentence[i] && sentence[i] <= 'z')
            index = sentence[i] - 'a';
        else
            continue;
        mark[index] = true;
    }
    for (int i = 0; i <= 25; i++)
        if (mark[i] == false)
            return (false);
    return (true);
    }
};