#include <stdio.h>


int main(void) {

  int a=0;
  int arr[100];
  int count=0;
  float sum=0;
  float mean=0;
  float absum=0;
  float abmean=0;
  int size=0;
  
  printf("Please enter a non-negative number.\n");
  scanf("%d",&a);

  while(a>0) {
    arr[count]=a;
    if(a>0) {
      arr[count]=a;
      count++;
    }
    printf("Enter another\n");
      scanf("%d",&a);
  }
  for(int j=0;j<count;j++) {
    sum=sum+arr[j];
    mean = sum/count;
  }
    printf("The average is %f\n",mean);

    for(int k=0;k<count;k++) {
      if(arr[k]>mean) {
	absum=absum+arr[k];
	size++;
      }
    }
    printf("The above average mean is %f\n",abmean=absum/size);
  
  return 0;
}
