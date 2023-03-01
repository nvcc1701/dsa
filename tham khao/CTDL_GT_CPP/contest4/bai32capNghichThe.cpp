// C++ program to count all pair that 
// hold condition i*arr[i] > j*arr[j] 
#include <bits/stdc++.h> 
using namespace std; 
  
/* This function merges two sorted arrays and 
   returns inversion count in the arrays.*/
int merge(int arr[], int temp[], int left, 
                       int mid, int right) 
{ 
    int inv_count = 0; 
  
    int i = left; /* index for left subarray*/
    int j = mid;  /* index for right subarray*/
    int k = left; /* ndex for resultant subarray*/
    while ((i <= mid - 1) && (j <= right)) 
    { 
        if (arr[i] <= arr[j]) 
            temp[k++] = arr[i++]; 
        else
        { 
            temp[k++] = arr[j++]; 
  
            inv_count = inv_count + (mid - i); 
        } 
    } 
  
    /* Copy the remaining elements of left 
     subarray (if there are any) to temp*/
    while (i <= mid - 1) 
        temp[k++] = arr[i++]; 
  
    /* Copy the remaining elements of right 
     subarray (if there are any) to temp*/
    while (j <= right) 
        temp[k++] = arr[j++]; 
  
    /* Copy back the merged elements to original 
      array*/
    for (i=left; i <= right; i++) 
        arr[i] = temp[i]; 
  
    return inv_count; 
} 
  
/* An auxiliary recursive function that sorts 
   the input array and returns the number of 
   inversions in the array. */
int _mergeSort(int arr[], int temp[], int left, 
                                      int right) 
{ 
    int mid, inv_count = 0; 
    if (right > left) 
    { 
        /* Divide the array into two parts and call 
          _mergeSortAndCountInv() for each of 
          the parts */
        mid = (right + left)/2; 
  
        /* Inversion count will be sum of inversions in 
           left-part, right-part and number of inversions 
           in merging */
        inv_count  = _mergeSort(arr, temp, left, mid); 
        inv_count += _mergeSort(arr, temp, mid+1, right); 
  
        /*Merge the two parts*/
        inv_count += merge(arr, temp, left, mid+1, right); 
    } 
  
    return inv_count; 
} 
  
/* This function sorts the input array and 
   returns the number of inversions in the 
   array */
int countPairs(int arr[], int n) 
{ 
    // Modify the array so that problem reduces to 
    // count inversion problem. 
//    for (int i=0; i<n; i++) 
//        arr[i] = i*arr[i]; 
//  
    // Count inversions using same logic as 
    // below post 
    // https://www.geeksforgeeks.org/counting-inversions/ 
    int temp[n]; 
    return _mergeSort(arr, temp, 0, n - 1); 
} 
  
// Driver code 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
//		cout << "\nCount of Pairs : "
         cout<< countPairs(arr, n); 
//         for(int i=0;i<n;i++){
//			cout<<arr[i]<<" ";
//		}
cout<<endl;
	}
	return 0;
}
