def rotation(arr, d,n):
    for i in range(d):
        temp = arr[0]
        for j in range(n - 1):
            arr[j] = arr[j + 1]
        arr[n - 1] = temp
    return arr


if __name__=="__main__":
    ans = rotation([1, 2, 3, 4, 5, 6, 7],2,7)
    print(ans)
