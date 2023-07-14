

def count_pairs(arr,n,diff):
    i=0
    j=i+1

    ans=0

    while(j<n):
        if(arr[j]-arr[i]<diff):
            j+=1
        elif(arr[j]-arr[i]>diff):
            i+=1
            if(i==j):
                    j+=1
        else:
            p=arr[i]
            q=arr[j]
            c1=0
            c2=0
            if(diff==0):
               while(arr[i]==p):
                   c1+=1
                   i+=1
                   j+=1
               ans+=(c1*(c1-1))/2    
            else:

              while(arr[i]==p):
                c1+=1
                i+=1
                
              
              while(j<n and arr[j]==q  ):
                c2+=1
                j+=1
                
              ans+=(c1*c2)
    return int(ans)    

 




arr=[1,3,3,3,6,7,9]
diff=0
print(count_pairs(arr,len(arr),diff))