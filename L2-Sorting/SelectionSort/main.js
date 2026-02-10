function selectionSort(arr){
	for(let i=0;i<arr.length-1;i++){
		let minIn=i;
		for(let j=i+1;j<arr.length;j++){
			if(arr[minIn]>arr[j]){
				minIn=j;
			}
		}
		if(minIn!=i){
			let tmp = arr[i];
			arr[i]=arr[minIn];
			arr[minIn]=tmp;
		}
	}
}

let arr = [5, 10, 2, 3, 0, 100, 30];
console.log("INITIAL: ["+arr+"]");
selectionSort(arr);
console.log("SORTED: ["+arr+"]");

