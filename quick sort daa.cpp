/*quick sort*/
#include<stdio.h>
void quick_sort(int arr[],int low,int high);
int partition(int arr[],int low,int high);
int main(){
	int n,i;
	printf("enter the array size:\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the array elements\n");
	for(i=1;i<=n;i++){
		scanf("%d",&arr[i]);
	}
	quick_sort(arr,1,n);
	printf("after sorting the array\n");
  for(i=1;i<=n;i++){
  	printf("%d\n",arr[i]);
  }
}
void quick_sort(int arr[],int low,int high)
{
    if(low<high){  //must have 2 elements ,if low<=high,so if there is 1 element in array it will run for once but no need of that as 1 element then what is the need to sort
        int q=partition(arr,low,high);
        quick_sort(arr,low,high-1);
        quick_sort(arr,low+1,high);
    }
}
int partition(int arr[],int low,int high){
	int i,j;
	int pivot=arr[high];
	i=low-1;
	for(j=low;j<=high-1;j++){
		if(arr[j]<=pivot){
			i++;
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	int temp=arr[i+1];
	arr[i+1]=arr[high];  //pivot =arr[high];
	arr[high]=temp;
	return (i+1);
}



