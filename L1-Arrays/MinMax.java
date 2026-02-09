import java.util.*;

public class MinMax{
	int[] arr;	
	
	public MinMax(int[] arr){
		this.arr = arr;
	}	

	public int min(){
		if(arr.length==0){
			System.out.println("Empty Array");
			return 0;
		}
		int minIn = 0;
		for(int i=1;i<arr.length;i++){
			if(arr[i]<arr[minIn]){
				minIn=i;
			}
		}
		return arr[minIn];
	}

	public int max(){
		if(arr.length==0){
                        System.out.println("Empty Array");
                        return 0;
                }

                int maxIn = 0;
                for(int i=1;i<arr.length;i++){
                        if(arr[i]>arr[maxIn]){
                                maxIn=i;
                        }
                }
                return arr[maxIn];
        }

	public static void main(String[] args){
		int[] arr = {12,36,16,84,2,1,109,0};
		System.out.println("Array: "+Arrays.toString(arr));
		MinMax mm = new MinMax(arr);
		System.out.println("Min: "+mm.min());
		System.out.println("Max: "+mm.max());
	}
}
