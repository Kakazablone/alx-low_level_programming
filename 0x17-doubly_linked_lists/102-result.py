#!/usr/bin/python3

largest_palindrm = 0
for x in range(100, 1000):
    for y in range(100, 1000):
        result = x * y
        if str(result) == str(result)[::-1] and result > largest_palindrm:
            largest_palindrm = result
with open("102-result", "w") as file:
    file.write(str(largest_palindrm))
