""""
def subArray_sum(arr,prefix_sum,n,sum):
     i=0
     k=0
     j=i+1
     while(k<n):
         if(arr[k]==sum):
             return True
         else:
             k+=1
     while(j<n):
         if(prefix_sum[j]-prefix_sum[i]<sum):
             j+=1
         elif(prefix_sum[j]-prefix_sum[i]>sum):
             i+=1
             if(i==j):
                 j+=1   
         else:
             return True     

     return False

arr=[5,3,4,6,2]
prefix_sum=[None]*len(arr)
prefix_sum[0]=arr[0]
i=1
while(i<len(arr)):
    prefix_sum[i]=prefix_sum[i-1]+arr[i]
    i+=1

print(subArray_sum(arr,prefix_sum,len(prefix_sum),sum=6))   
"""

