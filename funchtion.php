<?php
// Function to calculate the sum of an array
function calculateSum($arr) {
    $sum = 0;
    foreach ($arr as $num) {
        $sum += $num;
    }
    return $sum;
}

// Check if the form is submitted
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $numbers = explode(",", $_POST["numbers"]); // Get input and split by comma
    $numbers = array_map('intval', $numbers); // Convert to integers

    $sum = calculateSum($numbers); // Calculate sum
}
?>

<!DOCTYPE html>
<html>
<head>
    <title>Sum of Numbers</title>
</head>
<body>
    <h2>Enter Numbers Separated by Comma</h2>
    <form method="post">
        <input type="text" name="numbers" required>
        <button type="submit">Calculate Sum</button>
    </form>

    <?php if (isset($sum)): ?>
        <h3>Sum: <?php echo $sum; ?></h3>
    <?php endif; ?>
</body>
</html>
