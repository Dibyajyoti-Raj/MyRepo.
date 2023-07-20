// Heap Sort in C
  
  #include <stdio.h>
  
  // Function to swap the the position of two elements
  void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }
  
  void heapify(int arr[], int n, int i) {
    // Find largest among root, left child and right child
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if (left < n && arr[left] > arr[largest])
      largest = left;
  
    if (right < n && arr[right] > arr[largest])
      largest = right;
  
    // Swap and continue heapifying if root is not largest
    if (largest != i) {
      swap(&arr[i], &arr[largest]);
      heapify(arr, n, largest);
    }
  }
  void bulid(int arr[],int n){
   // Build max heap
    for (int i = n / 2 ; i >= 0; i--)
      heapify(arr, n, i);
  }
  // Main function to do heap sort
  void heapSort(int arr[], int n) {
    // Heap sort
    for (int i = n ; i >= 0; i--) {
      swap(&arr[0], &arr[i]);
  
      // Heapify root element to get highest element at root again
      heapify(arr, i, 0);
    }
  }
  
  // Print an array
  void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      printf("%d ", arr[i]);
    printf("\n");
  }
  
  // Driver code
  int main() {
    
   int arr[10],n,i;
   printf("Enter the number of digits to be sorted.\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    bulid(arr,n-1);
    heapSort(arr, n-1);
  
    printf("Sorted array is \n");
    printArray(arr, n);
  }