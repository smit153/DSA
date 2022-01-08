class Solution {
public:
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
	long origDiff = 0, n = size(nums1), minDiff;
	for(int i = 0; i < n; i++) origDiff += abs(nums1[i] - nums2[i]);
	minDiff = origDiff;
	vector<int>arr = nums1;
	sort(begin(arr), end(arr));        
	for(int i = 0; i < n; i++){
		long newDiff = origDiff - abs(nums1[i] - nums2[i]) + abs(bs(arr, nums2[i]) - nums2[i]);
		minDiff = min(minDiff, newDiff);
	}
	return minDiff % 1000000007;
}
int bs(vector<int>& arr, int k){               
	int n = size(arr), l = 0, r = n - 1, m, closest;
	while(l <= r){
		m = (l + r) / 2;
		if(arr[m] == k) return arr[m];
		if(arr[m] > k) r = m - 1;            
		else l = m + 1;              
	}
	closest = arr[m];
	if(m - 1 >= 0 && abs(arr[m - 1] - k) < abs(arr[m] - k)) closest = arr[m - 1];
	if(m + 1 <  n && abs(arr[m + 1] - k) < abs(arr[m] - k)) closest = arr[m + 1];
	return closest;
}
};