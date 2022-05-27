from collections import Counter
import csv

nums = []

with open("output.csv", "r") as f:
    for row in f:
        for num in [int(num) for num in row.strip().split(',')]:
            nums.append(num)

print(Counter(nums))
