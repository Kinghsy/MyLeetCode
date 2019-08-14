
from typing import List

def threeSum(nums: List[int]) -> List[List[int]]:

    from collections import defaultdict
    tempRes = set()
    result = []
    dict = defaultdict(set)

    # dict[i] indicates, right now, how many number pair having sum i
    # type(dict[i]) is a set
    # dict[-3] = {[-3, 0], [-2, -1]}
    # within list, numbers should be ordered



    for i in range(len(nums)):
        if len(dict[-nums[i]]) != 0:
            for elem in dict[-nums[i]]:
                ls = list(elem)
                ls.append(nums[i])
                tempRes.add(tuple(sorted(ls)))
        for j in range(i):
            tp = tuple(sorted([nums[i], nums[j]]))
            dict[nums[i]+nums[j]].add(tp)

    for elem in tempRes:
        result.append(list(elem))
    return sorted(result)



if __name__ == "__main__":
    print(threeSum([-1, 0, 1, 2, -1, -4]))