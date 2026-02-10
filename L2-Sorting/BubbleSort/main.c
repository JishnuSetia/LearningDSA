#include <stdio.h>

void bubbleSort(int *arr,int size){
	int flag=0;
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1-i;j++){
			if(arr[j]>arr[j+1]){
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				flag=1;
			}
		}
		if(flag==0){
			break;
		}
		flag=0;
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
	bubbleSort(arr,7);
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
