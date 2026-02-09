// Finding nth fibonacci number
// n=1, fibo = 0 and n=2, fibo = 1

function loopWay(n){
	let n1 = 0;
	let n2 = 1;
	for(let i=1;i<n;i++){
		let tmp = n1+n2;
		n1 = n2;
		n2 = tmp;
	}
	return n1;
}

function recursion(n){
	if(n<1){
                return 0;
        } else if(n==2) {
                return 1;
        } else {
                return recursion(n-1)+recursion(n-2);
        }
}

function tailRecursiveHelper(n,n1,n2){
	if(n<2){
		return n1;
	}else{
		return tailRecursiveHelper(n-1,n2,n2+n1);
	}
}

function tailRecursive(n){
	return tailRecursiveHelper(n,0,1);
}

console.log("Loop: "+loopWay(5));
console.log("Recursion: "+recursion(5));
console.log("Recursion: "+tailRecursive(5));
