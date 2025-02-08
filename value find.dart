import 'dart:io';

List<int> getNumbers() {
  print('Enter numbers separated by spaces:');
  String? input = stdin.readLineSync();
  if (input == null || input.isEmpty) {
    return [];
  }
  return input.split(' ').map(int.parse).toList();
}

int calculateSum(List<int> numbers) {
  return numbers.fold(0, (sum, num) => sum + num);
}

double calculateAverage(List<int> numbers) {
  return numbers.isNotEmpty ? calculateSum(numbers) / numbers.length : 0.0;
}

int findLargest(List<int> numbers) {
  return numbers.isNotEmpty ? numbers.reduce((a, b) => a > b ? a : b) : 0;
}

int findSmallest(List<int> numbers) {
  return numbers.isNotEmpty ? numbers.reduce((a, b) => a < b ? a : b) : 0;
}

void main() {
  List<int> numbers = getNumbers();

  print('\nResults:');
  print('Numbers: $numbers');
  print('Sum: ${calculateSum(numbers)}');
  print('Average: ${calculateAverage(numbers).toStringAsFixed(2)}');
  print('Largest: ${findLargest(numbers)}');
  print('Smallest: ${findSmallest(numbers)}');
}
