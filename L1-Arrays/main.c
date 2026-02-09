#include <stdio.h>

int min(int *arr,int size){
	if(size==0){
		printf("NO ELEMENTS\n");
		return 0;
	}
	int minIn = 0;
	for(int i=1;i<size;i++){
		if(arr[minIn]>arr[i]){
			minIn=i;
		}
	}
	return arr[minIn];
}

int max(int *arr,int size){
	if(size==0){
                printf("NO ELEMENTS\n");
                return 0;
        }
        int maxIn = 0;
        for(int i=1;i<size;i++){
                if(arr[maxIn]<arr[i]){
                        maxIn=i;
                }
        }
        return arr[maxIn];
}

int main(void){
	int arr[5]={1,109,12,3,2};
	int arr2[5]={0,672,7,42,8};
	printf("Arr1: ");
	for(int i=0;i<5;i++){
		if(i==4){
			printf("%d\n",arr[i]);
		}else{
			printf("%d, ",arr[i]);
		}
	}
	printf("Min: %d\nMax: %d\n",min(arr,5),max(arr,5));

	printf("Arr2: ");
        for(int i=0;i<5;i++){
                if(i==4){
                        printf("%d\n",arr2[i]);
                }else{
                        printf("%d, ",arr2[i]);
                }
        }
        printf("Min: %d\nMax: %d\n",min(arr2,5),max(arr2,5));

	return 0;
}
