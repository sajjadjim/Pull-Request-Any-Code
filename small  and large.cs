using System;
using System.Linq;

class Program
{
    static int[] GetNumbers()
    {
        Console.WriteLine("Enter numbers separated by spaces:");
        string input = Console.ReadLine();
        return input.Split(' ').Select(int.Parse).ToArray();
    }

    static int CalculateSum(int[] numbers)
    {
        return numbers.Sum();
    }

    static double CalculateAverage(int[] numbers)
    {
        return numbers.Length > 0 ? numbers.Average() : 0;
    }

    static int FindLargest(int[] numbers)
    {
        return numbers.Length > 0 ? numbers.Max() : 0;
    }

    static int FindSmallest(int[] numbers)
    {
        return numbers.Length > 0 ? numbers.Min() : 0;
    }

    static void Main()
    {
        int[] numbers = GetNumbers();

        Console.WriteLine("\nResults:");
        Console.WriteLine($"Numbers: {string.Join(", ", numbers)}");
        Console.WriteLine($"Sum: {CalculateSum(numbers)}");
        Console.WriteLine($"Average: {CalculateAverage(numbers):F2}");
        Console.WriteLine($"Largest: {FindLargest(numbers)}");
        Console.WriteLine($"Smallest: {FindSmallest(numbers)}");
    }
}
