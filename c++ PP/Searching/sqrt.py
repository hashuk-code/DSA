
def sqrt(n):
    low=0
    high=n

    while(low<=high):
        mid=int((low+high)/2)
        if (mid*mid)>n:
            high=mid-1
        else:
            if ((mid+1)*(mid+1)>n):
                return mid
            else:
                low=mid+1




n=1
print(sqrt(n))