class Solution:
    def searchRange(self, nums, target) :
        
        low=0
        high=len(nums)-1
        leftIndex=-1
        rightIndex=-1

        if len(nums)==0:
            return [leftIndex,rightIndex]

        while(low<=high):
            mid=int((low+high)/2)
            if (nums[mid]<target):
                low=mid+1
            elif (nums[mid]>target):
                high=mid-1
            else:
                if (mid==0):
                    leftIndex=mid
                    break
                elif (nums[mid-1]!=target):
                    leftIndex=mid
                    break
                else:
                    high=mid-1

        
        low=0
        high=len(nums)-1
        
        while(low<=high):
            mid=int((low+high)/2)
            if (nums[mid]<target):
                low=mid+1
            elif (nums[mid]>target):
                high=mid-1
            else:
                if (mid==(len(nums)-1)):
                    rightIndex=mid
                    break
                elif (nums[mid+1]!=target):
                    rightIndex=mid
                    break
                else:
                    low=mid+1



        
        return [leftIndex,rightIndex]





arr=[2,2]
target=2
obj=Solution()
print(obj.searchRange(arr,target))

