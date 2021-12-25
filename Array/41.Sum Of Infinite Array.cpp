//https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118820/offering/1381865

int mod = 1000000007;
long long func(vector<long long> &sumArray, long long x, long long n) {
    long long count = (x / n) % mod;

    long long res = (count * sumArray[(int) n]) % mod;
    res = (res + sumArray[(int) (x % n)]) % mod;

    return res;
}

vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q) {
    vector<int> ans;
    vector<long long> sumArray(n + 1);

    for (int i = 1; i <= n; i++) {
        sumArray[i] = (sumArray[i - 1] + arr[i - 1]) % mod;
    }
    for (int i = 0; i < queries.size(); i++) {
        vector<long long> range = queries[i];
        long long l = range[0];
        long long r = range[1];
        long long rsum = func(sumArray, r, n);
        long long lsum = func(sumArray, l - 1, n);
        ans.push_back((int) ((rsum - lsum + mod) % mod));
    }
    return ans;
}
