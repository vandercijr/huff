void quicksort(char * arr, int left, int right)
{
    int l,r pivot;

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
    }

}
