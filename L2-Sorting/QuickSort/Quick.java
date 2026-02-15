import java.util.*;

public class Quick{
	public void quickSort(int[] arr, int low, int high){
		if(low>=high){
			return;
		}
		int i=low-1;
		int j=low;
		while(j<high){
			if(arr[j]<arr[high]){
				i++;
				int tmp=arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}
			j++;
		}
		int tmp=arr[i+1];
		arr[i+1]=arr[high];
		arr[high]=tmp;
		quickSort(arr,low,i);
		quickSort(arr,i+2,high);
	}

	public static void main(String[] args){
		Quick qs = new Quick();
		int[] arr = {12,34,2,6,0,123,3};
		System.out.println("INITIAL: "+Arrays.toString(arr));
		qs.quickSort(arr,0,arr.length-1);
		System.out.println("SORTED: "+Arrays.toString(arr));
	}

}
