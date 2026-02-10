import java.util.*;
public class SelectionSort{
	
	public void selectionSort(int[] arr){
		for(int i=0;i<arr.length-1;i++){
			int smallestInd=i;
			for(int j=i+1;j<arr.length;j++){
				if(arr[smallestInd]>arr[j]){
					smallestInd=j;
				}
			}
			if(smallestInd!=i){
				int tmp = arr[i];
                        	arr[i]=arr[smallestInd];
                        	arr[smallestInd]=tmp;
			}
		}
	}

	public static void main(String[] args){
		SelectionSort s = new SelectionSort();
		int[] arr = {5, 10, 2, 3, 0, 100, 30};
		System.out.println("Initial: "+Arrays.toString(arr));
		s.selectionSort(arr);
		System.out.println("Sorted: "+Arrays.toString(arr));
	}
}
