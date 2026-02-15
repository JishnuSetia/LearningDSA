#include <stdio.h>

void quickSort(int *arr, int low, int high){
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

int main(void){
	int arr[]={5,10,2,3,0,100,30};
	printf("INITIAL: [");
	for(int i=0;i<7;i++){
		printf("%d",arr[i]);
		if(i==6){
			printf("]\n");
		}else{
			printf(", ");
		}
	}
	quickSort(arr,0,6);
	printf("SORTED: [");
        for(int i=0;i<7;i++){
                printf("%d",arr[i]);
                if(i==6){
                        printf("]\n");
                }else{
                        printf(", ");
                }
        }
	return 0;
}

