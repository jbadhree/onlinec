#include<stdio.h>

int sumOfElements(int* a, int size){
  int sum=0, i;
  for(i=0;i<size;i++){
    sum+=a[i];
  }
  return sum;
}



int binarySearch(int* a, int size, int x){
  int result = -1;
  int low = 0;
  int high = size - 1;
  int mid = 0;
  while(low <= high){
    mid = (low + high)/2;
    //printf("X: %d , A[mid]: %d\n", x, a[mid]);
    if (x == a[mid]){
      result = mid;
      //high = mid - 1;
      low = mid + 1;
      //return result;
    }
    else if (x < a[mid]){
      high = mid - 1;
    }
    else{
      low = mid + 1;
    }

    }

  return result;
}

int main(){
  
  int a[] = {2,4,10,10,10,18,20};
  int size = sizeof(a)/sizeof(a[0]);
  int total = sumOfElements(&a[0], size);
  int searchElement = 10;
  int foundIndex;
  
  
  total = sumOfElements(&a[0], size);
  printf("Total Of All Elements %d\n",total);

  

  //printf("Size of A is: %d\n", size);
  foundIndex = binarySearch(a, size, searchElement);
  printf("%d Found at Index %d\n", searchElement, foundIndex);

  return 0;
}
