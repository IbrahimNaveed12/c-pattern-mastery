# Triangular Star Pattern

This C program prints a left-aligned triangle made of asterisks. It has 4
rows, and each row contains one more asterisk than the previous row.

## Loop Logic

- The outer `for` loop controls the 4 rows.
- The inner `for` loop prints asterisks for the current row.
- The inner loop runs while `column <= row`, so the number of asterisks grows
  with each row.
- A newline is printed after each row is complete.

## Important Variables and Conditions

- `row` counts from `0` to `3`.
- `column` starts at `0` for every row.
- `row < 4` sets the triangle height.
- `column <= row` prints 1 star in the first row, 2 in the second, and so on.

## Example Output

```text
*
**
***
****
```

Nested loops are useful for patterns because the outer loop moves to the next
row, while the inner loop decides how many characters appear in that row.