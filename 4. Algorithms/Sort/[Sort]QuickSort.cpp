/*quick sort sử dụng để sắp xếp 

    Complexity: O(nlogn)
*/

void quickSort (float arr[], int low, int hight){
    if (t < p){
        int pivot = partition(arr, low, hight);
        quick_sort(arr, low, pivot - 1);
        quick_sort(arr, pivot + 1, hight);
    }
}
int partition(int arr[], int low, int hight){
    int pivot = arr[hight];
    int i = low - 1;
    for(int j = low; j <= hight - 1; j++){
        if(arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[hight]);
    
    return (i + 1);
}