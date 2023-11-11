#include <iostream>
#include <vector>

void sort(std::vector<int>& nums);
// Time complexity - O(n)
int main() {
	std::vector<int> nums = { 1, 0, 1, 0, 1, 0, 0, 1 };
	sort(nums);

	for (const auto& number : nums) {
		std::cout << number << ' ';
	}
	return 0;
}
void sort(std::vector<int>& nums) {
	int zero{ 0 };
	for (const auto& number : nums) {
		if (number == 0)
			++zero; // surandam kiek kartu pasikartoja nulis
	}
	for (int i = 0; i < nums.size(); ++i) {
		if (zero > 0) { // visus nulius surasom i prieki
			nums[i] = 0;
			--zero; // pamazinam likusiu nuliu kieki
		}
		else nums[i] = 1; // likusia vieta uzpildom su vienetais
	}
}