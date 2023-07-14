
def peak(arr):
    n=len(arr)
    low=0
    high=n-1
    
    while(low<=high):
        mid=int((low+high)/2)

        if (n==1):
              return mid
        elif (n==0):
              return -1
        
        if (mid==0) and (arr[mid]>arr[mid+1]):
                    return mid
        elif (mid==(n-1)) and (arr[mid]>arr[mid-1]):
                    return mid     

        if arr[mid]>arr[mid+1] and arr[mid]>arr[mid-1]:
            return mid
        elif arr[mid]<arr[mid+1]:
            low=mid+1
        else:
            high=mid-1







arr=[1]
idx_peak=peak(arr)
print(idx_peak)

