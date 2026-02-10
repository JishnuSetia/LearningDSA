#include <stdio.h>

void selectionSort(int *arr,int size){
	for(int i=0;i<size-1;i++){
		int minIn = i;
		for(int j=i+1;j<size;j++){
			if(arr[minIn]>arr[j]){
				minIn=j;
			}
		}
		if(minIn!=i){
			int tmp = arr[i];
			arr[i] = arr[minIn];
			arr[minIn] = tmp;
		}
	}
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
	selectionSort(arr,7);
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

