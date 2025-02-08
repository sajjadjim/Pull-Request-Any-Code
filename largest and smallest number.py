def get_numbers():
    numbers = input("Enter numbers separated by spaces: ").split()
    return [int(num) for num in numbers]

def calculate_sum(numbers):
    return sum(numbers)

def calculate_average(numbers):
    return sum(numbers) / len(numbers) if numbers else 0

def find_largest(numbers):
    return max(numbers) if numbers else None

def find_smallest(numbers):
    return min(numbers) if numbers else None

def main():
    numbers = get_numbers()
    
    total = calculate_sum(numbers)
    average = calculate_average(numbers)
    largest = find_largest(numbers)
    smallest = find_smallest(numbers)

    print("\nResults:")
    print(f"Numbers: {numbers}")
    print(f"Sum: {total}")
    print(f"Average: {average:.2f}")
    print(f"Largest: {largest}")
    print(f"Smallest: {smallest}")

if __name__ == "__main__":
    main()
