

def count_pairs(arr,n,val):
    i=0
    j=n-1
    ans=0
    while(i<j):
        curr=arr[i]+arr[j]
        if(curr>val):
            j=j-1
        elif(curr<val):
            i=i+1
        else:
            if(arr[i]==arr[j]):
                l=(j-i)+1
                ans+=(l*(l-1))/2
                
                break
            else:
                v1=arr[i]
                v2=arr[j]
                c1=0
                c2=0
                while(arr[i]==v1):
                    i=i+1
                    c1=c1+1
                while(arr[j]==v2):
                    j-=1
                    c2+=1
                ans+=(c1*c2)     

    return int(ans)      
         

arr=[1,2,3,3,3,4,4,4,5,5,5,6,7]
val=10
print(count_pairs(arr,len(arr),val))


