#include <iostream>
#include <vector>
#include <limits>

using namespace std;

vector<int> getNumbers() {
    int n, num;
    vector<int> numbers;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> num;
        numbers.push_back(num);
    }
    return numbers;
}

int calculateSum(const vector<int>& numbers) {
    int sum = 0;
    for (int num : numbers) sum += num;
    return sum;
}

double calculateAverage(const vector<int>& numbers) {
    return numbers.empty() ? 0 : (double)calculateSum(numbers) / numbers.size();
}

int findLargest(const vector<int>& numbers) {
    int maxNum = numeric_limits<int>::min();
    for (int num : numbers) if (num > maxNum) maxNum = num;
    return maxNum;
}

int findSmallest(const vector<int>& numbers) {
    int minNum = numeric_limits<int>::max();
    for (int num : numbers) if (num < minNum) minNum = num;
    return minNum;
}

int main() {
    vector<int> numbers = getNumbers();
    cout << "\nResults:\n";
    cout << "Sum: " << calculateSum(numbers) << endl;
    cout << "Average: " << calculateAverage(numbers) << endl;
    cout << "Largest: " << findLargest(numbers) << endl;
    cout << "Smallest: " << findSmallest(numbers) << endl;
    return 0;
}
