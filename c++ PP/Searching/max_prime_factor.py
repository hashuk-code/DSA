num=30
maximum=float('-inf')
for i in range (2,num+1):
    if num%i==0:
        cnt=0
        factor=i
        for j in range(2,int(factor/2)+1):
            if factor%j==0:
                cnt+=1
                break
        
        if cnt==0:
            maximum=max(maximum,factor)
            

print(maximum)

  
