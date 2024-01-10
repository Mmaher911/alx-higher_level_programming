#!/usr/bin/python3
def roman_to_int(roman_string):
    if not isinstance(roman_string, str):
	return 0
    total = 0
    num = 0
    digits = {'M': 1000, 'D': 500, 'C': 100, 'L': 50, 'X': 10, 'V': 5, 'I': 1}
    for r in reversed(roman_string):
        num = digits[r]
        total += num if total < num * 5 else -num
    return total
