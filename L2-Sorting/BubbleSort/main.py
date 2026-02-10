def bubbleSort(arr):
	flag=False
	for i in range(len(arr)-1):
		for j in range(len(arr)-1-i):
			if arr[j]>arr[j+1]:
				tmp=arr[j]
				arr[j]=arr[j+1]
				arr[j+1]=tmp
				flag=True
		if not flag:
			break
		flag=False

arr = [5,10,2,3,0,100,30]
print("INITIAL: "+str(arr))
bubbleSort(arr)
print("FINAL: "+str(arr))

