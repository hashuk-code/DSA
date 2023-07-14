
s="abcdefcopqrstuv"
freq=[0]*256
n=len(s)
i=0
j=0
freq[ord(s[0])]
ans=1
 
while(j<n-1):
    if freq[ord(s[j+1])]==0:
        j+=1
        freq[ord(s[j+1])]+=1
    else:
        freq[ord(s[i])]-=1   
        i+=1
    ans=max(ans,(j-i)+1)   

    

   
        

