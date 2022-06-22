def BinarySearch(array,lenArray,x):
    low = 0
    high = lenArray - 1
    

    while low <= high:
        mid = (low+high) // 2

        if array[mid] == x:
            return mid
        
        if array[mid] < x :
            low = mid +1
        else:
            high = mid-1

    return -1

if __name__=="__main__":
    array = [3, 4, 5, 6, 7, 8, 9, 10, 12, 13, 17, 20]

    x = int(input("Please Input Your Number : "))

    lenArray = len(array)

    result = BinarySearch(array,lenArray,x)

    if result == -1:
        print("The Number is not present in the array")

    else :
        print(f"Your Number Is In Index No : {result+1}")