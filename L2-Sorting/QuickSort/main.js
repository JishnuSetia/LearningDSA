function quick(arr,low,high){
	if(low>high){
		return;
	}
	let i=low-1;
	let j=low;
	while(j<high){
		if(arr[j]<arr[high]){
			i++;
			let tmp = arr[j];
			arr[j]=arr[i];
			arr[i]=tmp;
		}
		j++;
	}
	let tmp=arr[high];
	arr[high]=arr[i+1];
	arr[i+1]=tmp;
	quick(arr,low,i);
	quick(arr,i+2,high);
}


let arr = [5, 10, 2, 3, 0, 100, 30];
console.log("INITIAL: ["+arr+"]");
quick(arr,0,arr.length-1);
console.log("SORTED: ["+arr+"]");

