// NOI BOT
/*bubble sort là thuạt toán sắp xếp giữa 2 phần tử kề nhau
đây là sắp xếp tăng dần
*/
/*Complexity: O(n^2)*/

void bubbleSort(int a[], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        for (j = n; j >= i + 1; j--)
        {   
            if (a[j - 1] > a[j])        //ascending sort
                swap(&a[j - 1], &a[j]); // swap() use to swap two element 
        }
    }
}