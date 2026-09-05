# Alternate Star and Hash Pattern

This C program prints five rows that alternate between hashes and stars. Even-numbered rows contain hashes, and odd-numbered rows contain stars.

## Loop Logic

- The outer `for` loop controls the five rows.
- The condition `row % 2 == 0` checks whether the row number is even.
- An inner `for` loop prints five copies of either `#` or `*`.
- A newline moves the output to the next row.

## Important Variables and Conditions

- `row` counts from `0` to `4` and selects the current row.
- `column` counts from `0` to `4` and controls the five characters in each row.
- An even `row` prints hashes; an odd `row` prints stars.
- The condition `row < 5` sets the pattern height and `column < 5` sets its width.

## Example Output

```text
#####
*****
#####
*****
#####
```

The `%` operator finds the remainder after division. An even row has a remainder of `0` when divided by `2`, which makes it easy to alternate the characters.
