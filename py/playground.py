from collections import defaultdict



dict = defaultdict(set)

dict[3].add(1)
dict[3].add(2)
print(dict)

