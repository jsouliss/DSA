"""
You are given an integer array nums and an integer val. Your task is to remove all occurrences of val from nums in-place.

After removing all occurrences of val, return the number of remaining elements, say k, such that the first k elements of nums do not contain val.

Note:

The order of the elements which are not equal to val does not matter.
It is not necessary to consider elements beyond the first k positions of the array.
To be accepted, the first k elements of nums must contain only elements not equal to val.
Return k as the final result.
"""

def removeElement(nums: list[int], val: int) -> int:
    k = 0
    l = 0
    temp = 0
    for r in range(0, len(nums)):
        if nums[r] != val:
            k += 1
        if nums[r] != val and nums[l] == val:
            temp = nums[l]
            nums[l] = nums[r]
            nums[r] = temp
            l += 1
        elif nums[l] != val:  # val detected
            l = r
    return k

def main():
    nums = [0, 1, 2, 2, 3, 0, 4, 2]
    val = 2
    removeElement(nums, val)

if __name__ == "__main__":
    main()
