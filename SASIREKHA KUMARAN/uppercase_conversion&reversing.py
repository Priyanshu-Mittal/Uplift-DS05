#direct function program
def reverse(n):
    return n[::-1]


## own function

def reversing(arr,n):
    start=0
    end = len(arr)-1
    while start < end:
        arr[start],arr[end]=arr[end],arr[start]
        start=start+1
        end = end-1
    return arr



if __name__=="__main__":
    ans=reverse([1,2,3,4,5])
    ans1 = reversing([1, 2, 3, 4, 5],5)
    print(ans,ans1)