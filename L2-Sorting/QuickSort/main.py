def quick(arr,low,high):
	if(low>=high):
		return
	i=low-1
	j=low
	while j<high:
		if arr[j]<arr[high]:
			i+=1
			tmp = arr[i]
			arr[i]=arr[j]
			arr[j]=tmp
		j+=1
	tmp = arr[high]
	arr[high]=arr[i+1]
	arr[i+1]=tmp
	quick(arr,low,i)
	quick(arr,i+2,high)

arr = [5,10,2,3,0,100,30]
print("INITIAL: "+str(arr))
quick(arr,0,len(arr)-1)
print("FINAL: "+str(arr))
