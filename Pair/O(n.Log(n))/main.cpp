#include <iostream>
#include <vector>
#include <algorithm>
void printPair( std::vector<int>& nums, const int target);
// More optimised - O(n.log(n)) time complexity 
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
	std::sort(nums.begin(), nums.end(), std::less<int>());
	
	int low = 0;
	int high = nums.size() - 1;
	// if value larger than target -> reduce higher index
	// else increase lower index
	while (low < high) {
		if (nums[low] + nums[high] == target) {
			std::cout << "Pair found (" << nums[low] << ", " << nums[high] << ")\n";
			return;
		}
		if (nums[low] + nums[high] < target) {
			++low;
		}
		else --high;
	}
	std::cout << "Pair not found\n";
}