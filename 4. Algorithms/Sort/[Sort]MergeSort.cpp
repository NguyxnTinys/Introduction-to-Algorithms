    // TRON
/*
    Complexity: O(nlogn)
*/
#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>
using ll = long long;
using namespace std;
#define se second
#define fi first
#define pll pair<ll, ll>
#define pii pair<int, int>
#define pb push_back
#define REP(i, n)  for (int i = 0, _n = (n); i < _n; ++i)
#define fu(i, a, b)  for (int i = (a), _b = (b); i < _b; ++i) 
#define fd(i, b, a)  for (int i = (b), _a = (a); i > _a; --i)
#define ALL(v)  (v).begin(), (v).end()
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)

const int maxn = 1e9;

/** // ham merge : ham tong hop
 * Idea:
 * + Chon phan tu nho hon o hai dau day
 *  <tuc la chia day thanh cac doan nho => tim phan tu nho hon>
 * 
 * + Dua no nao day ket qua va xoa no khoi day con tuong ung
 *  <O day day arr[] la day ket qua va day L[], R[] la day template>
 * 
 * + Lap lai dieu do cho den khi mot trong hai day hay rong <bang null>
 * 
 * + Cac phan tu con lai cua day con se duoc dua not vao duoi cua ket qua
 */



/** // Ham tri
 * + Chia nho day thanh cac day con co cung dang
 *  <Su dung de quy>
*/
void merge(int arr[], int left, int mid, int right)
{
    
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i, j, k;
    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Tìm điểm giữa mảng
        int mid = left + (right - left) / 2;

        // Gọi đệ quy cho nửa đầu và nửa sau
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Gộp hai nửa đã sắp xếp
        merge(arr, left, mid, right);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    int arr[N];

    // Nhập mảng
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    // Áp dụng thuật toán merge sort
    mergeSort(arr, 0, N - 1);

    // In mảng đã sắp xếp
    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}