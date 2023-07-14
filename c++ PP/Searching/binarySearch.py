
def binary_search(arr,key):
      low=0
      high=len(arr)-1

      while(low<=high):

           mid=int((low+high)/2)

           if (arr[mid]<key):
               low=mid+1

           elif (arr[mid]>key):
               high=mid-1

           elif (arr[mid]==key):
               print(f"Key={key} is present at index ",mid)
               return 
               
      print("Element not present")
      return 


arr=[10,20,32,49,56,60,69,72,90,100,110]
key=1100
binary_search(arr,key)

    
            

