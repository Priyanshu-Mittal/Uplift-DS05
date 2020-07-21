def EXPCODE1(arr):
        n = len(arr)
        for i in range(n):
            swapped = False
            for j in range(0, n - i - 1):
                if arr[j] > arr[j + 1]:
                    arr[j], arr[j + 1] = arr[j + 1], arr[j]
                    swapped = True
            if swapped == False:
                break
        return arr


ans=EXPCODE1([11,22,9,44,1])
print("The largest element in the array is:",ans[len(ans)-1])
value=int(input("enter the value for the largest element"))
print("The kth largest value is ",ans[len(ans)-value])