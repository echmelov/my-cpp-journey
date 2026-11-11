#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {

	std::unordered_map<int, int> map;

	for (int i = 0; i < nums.size(); i++) {
		int complement = target - nums[i];

		if (map.find(complement) != map.end()) {
			return { i, map[complement] };
		}
		map[nums[i]] = i;
	}
	return{};
}

int main() {
	std::vector<int> nums{ 3,5,1,-8,0 };
	int target = 5;

	std::vector<int> result = twoSum(nums, target);
	if (!result.empty()) {
		std::cout << "indexes: " << result[0] << ' ' << result[1] << '\n';
	}
	else {
		std::cout << "results are not found";
	}
}