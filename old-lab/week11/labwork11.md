# Labwork 11: Bitwise Operations

---

## General Rules

- Use 32-bit unsigned integers.
- Bits are numbered from the right starting at 0 (LSB). So bit 0 is the least significant bit.
- When counting from the left (MSB side), bit positions are 31, 30, 29, ... down to 0.
- Unless the question says "modify in-place", return the new value.
- Do not use loops or arrays unless the question explicitly requires them.
- All return values for "get" questions must be exactly 0 or 1.
- Use bitwise operators (`&`, `|`, `^`, `~`, `<<`, `>>`). Do not use division or modulo.

---

## Questions

### Q1. Get a bit (right side)

Write a function that returns the value of the 7th bit from the right of a given unsigned integer.

- Input: an unsigned integer `x`
- Output: 0 if the 7th bit is 0, 1 if the 7th bit is 1
- Clarify: 7th bit from the right means bit position 6
- Requirement: do not change any other bits of `x`

### Q2. Set a bit (right side)

Write a function that sets the 5th bit from the right to 1 and returns the new integer.

- Input: an unsigned integer `x`
- Output: a new unsigned integer with the 5th bit forced to 1
- Clarify: 5th bit from the right means bit position 4
- Requirement: all other bits must remain the same as in `x`

### Q3. Clear a bit (right side)

Write a function that clears the 2nd bit from the right to 0 and returns the new integer.

- Input: an unsigned integer `x`
- Output: a new unsigned integer with the 2nd bit forced to 0
- Clarify: 2nd bit from the right means bit position 1
- Requirement: all other bits must remain the same as in `x`

### Q4. Toggle a bit (right side)

Write a function that toggles the 8th bit from the right and returns the new integer.

- Input: an unsigned integer `x`
- Output: a new unsigned integer where the 8th bit from the right is flipped
- Clarify: 8th bit from the right means bit position 7
- Requirement: only the target bit may change

### Q5. Replace a bit (right side)

Write a function that sets the 6th bit from the right to a given value `b`.

- Input: an unsigned integer `x` and an unsigned integer `b` where `b` is 0 or 1
- Output: a new unsigned integer with the 6th bit set to `b`
- Clarify: 6th bit from the right means bit position 5
- Requirement: if `b` is 0, the bit must be cleared; if `b` is 1, the bit must be set

### Q6. Get a bit (left side)

Write a function that returns the value of the 5th bit from the left (MSB side).

- Input: an unsigned integer `x`
- Output: 0 or 1 based on the 5th bit from the left
- Clarify: 5th bit from the left means bit position 27
- Requirement: return exactly 0 or 1

### Q7. Clear a bit (left side)

Write a function that clears the 2nd bit from the left to 0 and returns the new integer.

- Input: an unsigned integer `x`
- Output: a new unsigned integer with the 2nd bit from the left forced to 0
- Clarify: 2nd bit from the left means bit position 30
- Requirement: all other bits must remain the same as in `x`

### Q8. Set a bit (left side)

Write a function that sets the 6th bit from the left to 1 and returns the new integer.

- Input: an unsigned integer `x`
- Output: a new unsigned integer with the 6th bit from the left forced to 1
- Clarify: 6th bit from the left means bit position 26
- Requirement: all other bits must remain the same as in `x`

### Q9. Get a bit (right side)

Write a function that returns the value of the 9th bit from the right of a given unsigned integer.

- Input: an unsigned integer `x`
- Output: 0 if the 9th bit is 0, 1 if the 9th bit is 1
- Clarify: 9th bit from the right means bit position 8
- Requirement: return exactly 0 or 1
