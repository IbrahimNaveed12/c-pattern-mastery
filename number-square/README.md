# Number Square Pattern

This C program prints a square pattern using the numbers `1` through `5` in
each row. It demonstrates how nested loops can create rows and columns.

## Loop Logic

- The outer `for` loop repeats five times to create five rows.
- The inner `for` loop counts from `1` to `5` and prints one number per column.
- A newline is printed after each row is complete.

## Important Variables and Conditions

- `row` counts the rows from `0` to `4`.
- `column` counts from `1` to `5`, so the displayed numbers are easy to read.
- The condition `row < 5` keeps the pattern five rows tall.
- The condition `column < 6` keeps each row five numbers wide.

## Example Output

```text
12345
12345
12345
12345
12345
```

Nested loops are useful here because the outer loop handles the repeated rows,
while the inner loop handles the contents of each row.