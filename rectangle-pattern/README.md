# Rectangle Pattern

This C program prints a rectangle with 3 rows and 5 columns of asterisks.
Each asterisk is followed by a tab so the columns are easy to see.

## Loop Logic

- The outer `for` loop runs 3 times and creates the rows.
- The inner `for` loop runs 5 times and prints the columns in each row.
- The newline after the inner loop moves the output to the next row.

## Important Variables and Conditions

- `row` counts from `0` to `2`.
- `column` counts from `0` to `4`.
- `row < 3` sets the rectangle height.
- `column < 5` sets the rectangle width.

## Example Output

```text
*       *       *       *       *
*       *       *       *       *
*       *       *       *       *
```

Nested loops make this pattern easy to understand: one loop controls the
number of rows, and the other controls what appears in each row.
