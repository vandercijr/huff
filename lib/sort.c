void quicksort(char * arr, int left, int right)
{
    int l,r;
    char * pivot, aux;

    l     = left;
    r     = right;
    pivot = arr[(int)(l+r)/2];

    while (l < r) {
      while (l < arr[pivot]) {
        l++;
      }
      while (r > arr[pivot]) {
        r--;
      }
      if (l <= r) {
         aux = arr[l];
         a[l] = a[r];
         a[r] = aux;
         l++;
         r--;
      }
    }

    if (r > left) {
      quicksort(arr, left, r);
    }

    if (l < right) {
        quicksort(arr, l, right);
    }
}
