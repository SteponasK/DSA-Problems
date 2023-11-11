#include <iostream>
#include <vector>

void printPair(const std::vector<int>& nums, const int target);
// Unoptimised, brute-force O(n^2) complexity.
int main() {

	const std::vector<int> nums1 = { 8, 7, 2, 5, 3, 1 };
	const std::vector<int> nums2 = { 5, 2, 6, 8, 1, 9 };
	int target{};
	std::cin >> target;

	printPair(nums1, target);
	printPair(nums2, target);
	return 0;
}
void printPair(const std::vector<int>& nums, const int target) {
	for (int i = 0; i < nums.size(); ++i) {
		for (int j = i+1; j < nums.size(); ++j) {
			if ( nums[i] + nums[j] == target) {
				std::cout << "Pair found (" << nums[j] << ", " << nums[i] << ")\n";
				return;
			}
		}
	}
	std::cout << "Pair not found\n";
}