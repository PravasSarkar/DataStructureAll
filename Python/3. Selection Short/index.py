def insertingShort(arr , n):
    for i in range(0,n-1):
        for j in range(i+1,n):
            if(arr[i] > arr[j]):
                temp = arr[i]
                arr[i] = arr[j]
                arr[j]=temp
    print(arr)

if __name__ == "__main__":
    array1 = [20, 12, 10, 15, 2, 3, 9, 7, 11, 4]

    n = len(array1)

    insertingShort(array1,n)