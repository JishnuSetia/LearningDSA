public class Fibo{
	// Finding nth fibonacci number
	// n=1, fibo = 0 and n=2, fibo = 1

	public int loopWay(int n){
		int n1 = 0;
		int n2 = 1;
		for(int i=1;i<n;i++){
			int tmp = n1+n2;
			n1 = n2;
			n2 = tmp;
		}
		return n1;
	}

	public int recursion(int n){
		if(n<1){
			return 0;
		} else if(n==2){
			return 1;
		} else{
			return recursion(n-1)+recursion(n-2);
		}
	}
	
	public int tailRecursionHelper(int n, int n1, int n2){
		if(n<2){
			return n1;
		} else{
			return tailRecursionHelper(n-1,n2,n2+n1);
		}
	}

	public int tailRecursion(int n){
		return tailRecursionHelper(n,0,1);
	}
	
	public static void main(String[] args){
		Fibo f = new Fibo();
		System.out.println("Loop: "+f.loopWay(5));
		System.out.println("Recursion: "+f.recursion(5));
		System.out.println("Tail Recursion: "+f.tailRecursion(5));

	}
}
