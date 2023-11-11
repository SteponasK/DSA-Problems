#include <iostream>
#include <vector>
#include <algorithm>
void printMaxProduct(std::vector<int>& nums);
// Time complexity - O(n.Log(n))
int main() {
	std::vector<int> nums = { -10, -3, 5, 6, -2 };
	printMaxProduct(nums);
	return 0;
}
void printMaxProduct(std::vector<int>& nums) {
	int size = nums.size();
	if (size < 2) return;
	std::sort(nums.begin(), nums.end(), std::less<int>());

	if (nums[0] * nums[1] > nums[size - 1] * nums[size - 2]) {
		std::cout << "Maximum product is (" << nums[0] << ", " << nums[1] << ")\n";
	}
	else {
		std::cout << "Maximum product is (" << nums[size - 1] << ", " << nums[size - 2] << ")\n";
	}
}