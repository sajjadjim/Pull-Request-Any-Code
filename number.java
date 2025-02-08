import java.util.Scanner;
import java.util.Arrays;

public class NumberStats {
    
    public static int[] getNumbers() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter numbers separated by spaces:");
        String input = scanner.nextLine();
        String[] inputArr = input.split(" ");
        int[] numbers = new int[inputArr.length];
        for (int i = 0; i < inputArr.length; i++) {
            numbers[i] = Integer.parseInt(inputArr[i]);
        }
        return numbers;
    }

    public static int calculateSum(int[] numbers) {
        int sum = 0;
        for (int num : numbers) {
            sum += num;
        }
        return sum;
    }

    public static double calculateAverage(int[] numbers) {
        return numbers.length > 0 ? calculateSum(numbers) / (double) numbers.length : 0;
    }

    public static int findLargest(int[] numbers) {
        return numbers.length > 0 ? Arrays.stream(numbers).max().getAsInt() : 0;
    }

    public static int findSmallest(int[] numbers) {
        return numbers.length > 0 ? Arrays.stream(numbers).min().getAsInt() : 0;
    }

    public static void main(String[] args) {
        int[] numbers = getNumbers();
        System.out.println("\nResults:");
        System.out.println("Numbers: " + Arrays.toString(numbers));
        System.out.println("Sum: " + calculateSum(numbers));
        System.out.println("Average: " + calculateAverage(numbers));
        System.out.println("Largest: " + findLargest(numbers));
        System.out.println("Smallest: " + findSmallest(numbers));
    }
}
