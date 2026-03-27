#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int N = nums.size();
    for (int i = 0;i < N; i++){
        for(int j = i + 1;j < N; j++){
            if(nums[i]+nums[j] == target){return{i,j};};
            }   
        }
        return{};
    }
};