import java.util.*;
public class InsertionSort{
	
	public void insertionSort(int[] arr){
		for(int i=1;i<arr.length;i++){
			int j=i-1;
			int val=arr[i];
			while(j>=0&&arr[j]>val){
				arr[j+1]=arr[j];
				j--;
			}
			arr[j+1]=val;
		}
	}
	
	public static void main(String[] args){
		InsertionSort is = new InsertionSort();
		int[] arr = {12,34,2,6,0,123,3};
		System.out.println("INITIAL: "+Arrays.toString(arr));
		is.insertionSort(arr);
		System.out.println("SORTED: "+Arrays.toString(arr));
	}

}
