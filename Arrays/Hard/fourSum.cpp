#include<bits/stdc++.h>
using namespace std;
//Brute
vector<vector<int>> fourSum(vector<int>& nums, int target) {
	int n = nums.size();
	set<vector<int>> st ;

	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			set<int> hashedSet;
			for(int k = j + 1; k < n; k++) {
				int sum = nums[i] + nums[j];
				sum += nums[k];
				int fourth = target - sum;
				if(hashedSet.find(fourth) != hashedSet.end()) {
					vector<int> temp = {nums[i], nums[j], nums[k], fourth};
					sort(temp.begin(), temp.end());
					st.insert(temp);
				}
				hashedSet.insert(nums[k]);
			}
		}
	}

	vector<vector<int>> ans(st.begin(), st.end());

	return ans;
}

//Optimal
vector<vector<int>> fourSumoptimal(vector<int>& nums, int target) {
	sort(nums.begin(), nums.end());
	vector<vector<int>> ans;

	int n = nums.size();
	for(int i = 0; i < n; i++) {
		if(i > 0 && nums[i] == nums[i - 1]) continue;
		for(int j = i + 1; j < n; j++) {
			if(j != i + 1 && nums[j] == nums[j - 1]) continue;
			  int k = j + 1, l = n - 1;
			while( k < l) {
				long long sum = nums[i] + nums[j];
				sum += nums[k] + nums[l];

				if(sum == target) {
					vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
					ans.push_back(temp);
					k++, l--;
				    		while(k < l && nums[k] == nums[k - 1]) k++;
				    while(k < l && nums[l] == nums[l + 1]) l--;
				}else if(sum < target) k++;
				else l--;
			}
		}
	}


	return ans;
}

int main()
{
	vector<int> arr = {1,1,2,2,3,2,3,4,3,4,5,5,4,1};
	vector<vector<int>> res = fourSumoptimal(arr, 8);

	for(auto i : res) {
		for(auto j : i) {
			cout << j << " ";
		}
		cout << endl;
	}

	return 0;
}