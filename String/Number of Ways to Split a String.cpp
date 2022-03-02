class Solution
{
public:
    int numWays(string s)
    {
        long long int i, n = s.size();
        int one = 0;
        long long mod = 1000000007;
        long long ans;
        for (i = 0; i < n; i++)
            if (s[i] == '1')
                one++;
        if (one % 3 != 0)
            return 0;
        else if (one == 0)
        {
            ans = ((n - 1) * (n - 2) / 2) % mod;
        }
        else
        {
            long long countOfone = one / 3;
            long long index1 = -1, index1end = -1;
            long long index2 = -1, index2end = -1;
            long long count = 0;
            for (i = 0; i < n; i++)
            {
                if (s[i] == '1')
                    count++;
                if (count == countOfone && index1 == -1)
                    index1 = i;
                if (count == countOfone + 1 && index2 == -1)
                    index2 = i;
                if (count == countOfone * 2 && index1end == -1)
                    index1end = i;
                if (count == countOfone * 2 + 1 && index2end == -1)
                    index2end = i;
            }
            ans = ((index2 - index1) % mod) * ((index2end - index1end) % mod) % mod;
        }
        return (int)ans;
    }
};