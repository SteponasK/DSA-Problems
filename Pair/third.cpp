#include <iostream>
#include <vector>
#include <unordered_map>
void printPair( std::vector<int>& nums, const int target);
// Best optimisation - O(n) time complexity 
int main() {
	std::vector<int> nums1 = { 8, 7, 2, 5, 3, 1 };
	std::vector<int> nums2 = { 5, 2, 6, 8, 1, 9 };
	int target{};
	std::cin >> target;

	printPair(nums1, target);
	printPair(nums2, target);
	return 0;
}
void printPair(std::vector<int>& nums, const int target) {
	std::unordered_map<int, int> map;

	for (int i = 0; i < nums.size(); ++i) {
		// map.find() returnina map.end() iterator, jeigu neranda reiksmes
		if (map.find(target - nums[i]) != map.end()) { // reiksme rasta
			std::cout << "Pair found (" << nums[map[target - nums[i]]]
				<< ", " << nums[i] << '\n';
			return;
		}
		// store'inam index of the current element in the map
		map[nums[i]] = i;
	}
	std::cout << "Pair not found\n";
}