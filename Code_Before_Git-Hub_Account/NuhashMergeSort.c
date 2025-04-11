int main()
{
    printf("Enter the total amount of numbers : ");
    int n;
    scanf("%d", &n);
    printf("Take array elements : ");

    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int i;
    merge_sort(arr, 0, n-1);

    printf("Here is the Sorted Array: ");

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

merge_sort(int arr[],int low,int high)
{
    if(low < high)
    {
       int mid = (low + high) / 2;
       merge_sort(arr, low, mid);
       merge_sort(arr, mid + 1, high);
       merge(arr, low, mid, high);
    }

}

merge(int arr[], int l, int m, int h)
{
    int arr1[10], arr2[10];
    int n1, n2, i, j, k;
    n1 = m - l + 1;
    n2 = h - m;

    for(i = 0; i < n1; i++)
        arr1[i] = arr[l + i];

    for(j = 0; j < n2; j++)
        arr2[j] = arr[m + j + 1];

    arr1[i] = 9999;
    arr2[j] = 9999;

    i = 0;
    j = 0;

    for(k = l; k <= h; k++)
    {
        if(arr1[i] <= arr2[j])
            {arr[k] = arr1[i];
            i++;}
        else
            {arr[k] = arr2[j];
            j++;}
    }

}
