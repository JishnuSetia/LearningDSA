def insertionSort(arr):
	for i in range(1,len(arr)):
		val=arr[i]
		j=i-1
		while j>=0 and arr[j]>val:
			arr[j+1]=arr[j]
			j-=1
		arr[j+1]=val

arr = [5,10,2,3,0,100,30]
print("INITIAL: "+str(arr))
insertionSort(arr)
print("FINAL: "+str(arr))

