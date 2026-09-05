# Number Triangle Pattern

This C program prints a left-aligned triangle of numbers. Each row starts at
1 and prints one more number than the row above it.

## Loop Logic

- The outer `for` loop controls the rows from 1 through 4.
- The inner `for` loop prints numbers from 1 through the current row number.
- A newline is printed after the inner loop completes each row.

## Important Variables and Conditions

- `row` identifies the current row and controls the triangle height.
- `number` counts the values printed in each row.
- `row < 5` creates 4 rows.
- `number <= row` prints exactly as many numbers as the current row number.

## Example Output

```text
1
12
123
1234
```

The outer loop decides which row is being printed. The inner loop uses that
row number as its limit, so every new row contains one additional number.