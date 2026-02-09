#include <stdio.h>

// Finding nth fibonacci number
// n=1, fibo = 0 and n=2, fibo = 1

int loopWay(int n){
	int n1 = 0;
	int n2 = 1;
	for(int i=1;i<n;i++){
		int tmp = n1+n2;
		n1 = n2;
		n2 = tmp;
	}
	return n1;
}

int recursiveWay(int n){
	if(n<1){
		return 0;
	} else if(n==2) {
		return 1;
	} else {
		return recursiveWay(n-1)+recursiveWay(n-2);
	}
}

int tailRecursiveHelper(int n, int n1, int n2){
	if(n<2){
		return n1;
	}else{
		return tailRecursiveHelper(n-1,n2,n2+n1);
	}
}

int tailRecursive(int n){
	return tailRecursiveHelper(n,0,1);
}

int main(void){
	printf("Loop: %d\nRecursion: %d\n",loopWay(5),recursiveWay(5));
	printf("Tail Recursion: %d\n",tailRecursive(5));
	return 0;
}
