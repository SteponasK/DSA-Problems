#include <iostream>
#include <vector>
void printMaxProduct(const std::vector<int>& nums);
// Time complexity - O(n^2)
int main() {
	const std::vector<int> nums = { -10, -3, 5, 6, -2 };
	printMaxProduct(nums);
	return 0;
}
void printMaxProduct(const std::vector<int>& nums) {
	int max{ nums[0] }; // default max value
	int maxFirst{ 0 };
	int maxSecond{ 0 };
	for (int i = 0; i < nums.size(); ++i) {
		for (int j = i+1; j < nums.size(); ++j) {
			if (nums[i] + nums[j] > max) { 
				max = nums[i] + nums[j];
				maxFirst = nums[i];
				maxSecond = nums[j];
			}
		}
	}
	std::cout << "Maximum product is (" << maxFirst << ", " << maxSecond << ")\n";
}