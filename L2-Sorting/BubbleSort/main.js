function bubbleSort(arr){
	let flag=false;
	for(let i=0;i<arr.length-1;i++){
		for(let j=0;j<arr.length-1-i;j++){
			if(arr[j]>arr[j+1]){
				let tmp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				flag=true;
			}
		}
		if(!flag){
			break;
		}
		flag=false;
	}
}

let arr = [5, 10, 2, 3, 0, 100, 30];
console.log("INITIAL: ["+arr+"]");
bubbleSort(arr);
console.log("SORTED: ["+arr+"]");
