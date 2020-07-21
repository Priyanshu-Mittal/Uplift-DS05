def problem(arr,k,n):
    count=0
    for i in range(len(arr)):
        if arr[i]+k > (sum(arr[:i]+arr[i+1:])):
            count+=1
    return count

ans=problem([2,1,6,7],4,4)
print(ans)
