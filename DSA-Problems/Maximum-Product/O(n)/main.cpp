#include <iostream>
#include <vector>
void printMaxProduct(std::vector<int>& nums);
// Time complexity - O(n)
int main() {
	std::vector<int> nums = { -10, -3, 5, 6, -2 };
	printMaxProduct(nums);
	return 0;
}
void printMaxProduct(std::vector<int>& nums) {
	int max1{ nums[0] };
	int max2{ INT_MIN };
	int min1{ nums[0] };
	int min2{ INT_MAX };

	for (int i = 1; i < nums.size(); ++i) {
		// jeigu current element didesnis uz max element,
		// update max1 ir max2
		if (nums[i] > max1) { 
			max2 = max1;
			max1 = nums[i];
		}
		// jeigu current element mazesnis uz max element,
		// bet didesnis uz antra max element, update max2
		else if (nums[i] > max2) {
			max2 = nums[i];
		}
		// jeigu current element mazesnis uz min element
		// update min1 ir min2
		if (min1 < nums[i]) {
			min2 = min1;
			min1 = nums[i];
		}
		// jeigu current element didesnis uz min element, 
		// bet mazesnis uz antra min element, update min2
		else if (min2 < nums[i]) {
			min2 = nums[i];
		}
		// kitaip ignore
	}
	if (max1 * max2 > min1 * min2) {
		std::cout << "Maximum product is (" << max1 << ", " << max2 << ")\n";
	}
	else {
		std::cout << "Maximum product is (" << min1 << ", " << min2 << ")\n";
	}
}