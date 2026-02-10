def selectionSort(arr):
	for i in range(len(arr)-1):
		minIn=i
		for j in range(i+1,len(arr)):
			if arr[minIn]>arr[j]:
				minIn=j
		if minIn!=i:
			tmp=arr[i]
			arr[i]=arr[minIn]
			arr[minIn]=tmp

arr = [5,10,2,3,0,100,30]
print("INITIAL: "+str(arr))
selectionSort(arr)
print("FINAL: "+str(arr))

