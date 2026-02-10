#include <stdio.h>

void insertionSort(int *arr,int size){
	for(int i=1;i<size;i++){
		int j=i-1;
		int val=arr[i];
		while(j>=0&&arr[j]>val){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=val;
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
	insertionSort(arr,7);
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

