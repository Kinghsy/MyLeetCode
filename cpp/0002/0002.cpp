//
// Created by Huang, Shuyang on 2019-06-27.
//

#include "0002.h"
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> Solution::twoSum(vector<int>& nums, int target) {

    vector<int> result;
    unordered_map<int, int> map;
    unordered_map<int, int>::iterator iter;

    for (int i = 0; i < nums.size(); ++i) {
        if ((iter = map.find(target - nums[i])) != map.end()) {
            result.push_back(iter->second);
            result.push_back(i);
            break;
        }
        map.insert(pair<int, int>(nums[i], i));
    }

    return result;

}

