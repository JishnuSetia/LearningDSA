function insertionSort(arr){
	for(let i=1;i<arr.length;i++){
		let j=i-1;
		let val=arr[i];
		while(j>=0&&arr[j]>val){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=val;
	}
}
let arr = [5, 10, 2, 3, 0, 100, 30];
console.log("INITIAL: ["+arr+"]");
insertionSort(arr);
console.log("SORTED: ["+arr+"]");
