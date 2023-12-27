//CHON
    // tim phan tu nho nhat trong mang
    //  doi vi tri nho nhat voi vi tri dau mang
    // lam tiep theo cho den het

/*Complexity: O(n^2)*/

void selectionSort(int n, int a[]){
    int i, j, min;
    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        swap(&a[i], &a[min]);
    }
}