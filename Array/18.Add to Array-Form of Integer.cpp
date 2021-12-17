class Solution
{
public:
    vector<int> addToArrayForm(vector<int>& a, int k);
};
vector<int> Solution :: addToArrayForm(vector<int>& a, int k)
{
    int n = a.size();
    vector<int> answer;
    int carry = 0;
    while(!a.empty() || k!=0)
    {
        int lastDigit_1 = a.empty() ? 0 : a.back();
        int lastDigit_2 = k%10;
        int sum = lastDigit_1 + lastDigit_2 + carry;
        answer.push_back(sum%10);
        carry = sum/10;
        if(!a.empty()) 
            a.pop_back();
        k = k/10;
    }
    if(carry!=0) 
        answer.push_back(carry);
    reverse(answer.begin(), answer.end());
    return answer;
}