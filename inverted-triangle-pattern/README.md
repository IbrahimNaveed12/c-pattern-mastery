# Inverted Triangle Star Pattern

This C program prints a left-aligned inverted triangle made of asterisks. It
starts with 4 stars and removes one star from each following row.

## Loop Logic

- The outer `for` loop controls the 4 rows.
- The inner `for` loop prints the stars in the current row.
- The inner loop starts at 4 and stops when `column` is no longer greater
  than `row`.
- A newline is printed after each row is complete.

## Important Variables and Conditions

- `row` counts from `0` to `3`.
- `column` starts at `4` for every row and decreases toward `row`.
- `row < 4` sets the triangle height.
- `column > row` makes each row contain one fewer star than the previous row.

## Example Output

```text
****
***
**
*
```

The outer loop chooses the row, while the inner loop controls how many stars
are printed. Decreasing the inner loop range creates the inverted shape.
