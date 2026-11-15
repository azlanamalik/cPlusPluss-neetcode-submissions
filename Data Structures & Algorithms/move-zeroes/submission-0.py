class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        total_iteration = len(nums)
        i = 0
        while (i<total_iteration):
            print(nums[i])
            if nums[i] == 0:
                print("here")
                _ = nums.pop(i);
                nums.append(0)
                total_iteration -= 1
            else:
                i+= 1
            