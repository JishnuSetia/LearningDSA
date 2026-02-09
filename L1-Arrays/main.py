def min(arr):
	if len(arr)==0:
		print("NO ELEMENTS");
		return;
	minIn=0
	for i in range(1,len(arr)):
		if arr[minIn]>arr[i]:
			minIn=i
	return arr[minIn]

def max(arr):
	if len(arr)==0:
                print("NO ELEMENTS");
                return;
	maxIn=0
	for i in range(1,len(arr)):
		if arr[maxIn]<arr[i]:
			maxIn=i
	return arr[maxIn]

arr = [1,2,3,4,5,6]
print("Arr: "+str(arr))
print("Min: "+str(min(arr)))
print("Max: "+str(max(arr)))
