function min(arr){
	if(arr.length==0){
		console.log("NO ELEMENTS");
		return;
	}
	let minIn = 0;
	for(let i=1;i<arr.length;i++){
		if(arr[i]<arr[minIn]){
			minIn=i;
		}
	}
	return arr[minIn];
}

function max(arr){
	if(arr.length==0){
                console.log("NO ELEMENTS");
                return;
        }
        let maxIn = 0;
        for(let i=1;i<arr.length;i++){
                if(arr[i]>arr[maxIn]){
                        maxIn=i;
                }
        }
        return arr[maxIn];
}

let arr = [1,2,3,4,5,6];
console.log("Arr: ["+arr+"]");
console.log("Min: "+min(arr));
console.log("Max: "+max(arr));
