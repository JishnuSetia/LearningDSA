import java.util.*;
public class BubbleSort{
	
	public void bubbleSort(int[] arr){
		boolean flag=false;
		for(int i=0;i<arr.length-1;i++){
			for(int j=0;j<arr.length-1-i;j++){
				if(arr[j]>arr[j+1]){
					int tmp = arr[j];
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
	
	public static void main(String[] args){
		BubbleSort bs = new BubbleSort();
		int[] arr = {12,34,2,6,0,123,3};
		System.out.println("INITIAL: "+Arrays.toString(arr));
		bs.bubbleSort(arr);
		System.out.println("SORTED: "+Arrays.toString(arr));
	}
}
