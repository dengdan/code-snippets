data = [
    ([11,13,15,17,19], [2,4,6,8,9,10]),
    ([1], [2, 3]),
    ]

for arr1, arr2 in data:
    arr = arr1 + arr2
    arr.sort()
    idx1 = 0
    idx2 = 0
    num = None
    idx = -1
    mid_idx = int((len(arr1) + len(arr2)) / 2)
    while idx < mid_idx:
        if idx2 >= len(arr2) or (idx1 < len(arr1) and arr1[idx1] < arr2[idx2]):
            num = arr1[idx1]
            idx1 += 1
        else:
            num = arr2[idx2]
            idx2 += 1
        idx += 1
        
    print(mid_idx, arr[mid_idx], idx, num)
    assert(arr[mid_idx] == num)
        