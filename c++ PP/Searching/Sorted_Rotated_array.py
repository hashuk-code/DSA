def pivot_detection(arr,n):
    l=0
    h=n-1

    while(l<=h):
        mid=int((l+h)/2)
        if (arr[mid]<=arr[n-1]):
            h=mid-1
        else:
            if (arr[mid]>arr[mid+1]):
                return mid
            else:
                l=mid+1
    return -1           


def binary_search(arr,key,low,high):
    

    while(low<=high):

           mid=int((low+high)/2)

           if (arr[mid]<key):
               low=mid+1

           elif (arr[mid]>key):
               high=mid-1

           else:
               return mid

    
    return -1



arr=[1,3]
n=len(arr)
key=3

pivot=pivot_detection(arr,n)

if (key>arr[n-1]):
    print(binary_search(arr,key,0,pivot))  
else:
    print(binary_search(arr,key,pivot+1,n-1))    