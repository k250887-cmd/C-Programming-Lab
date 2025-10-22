#include<stdio.h>
int main(){
  int n;
  int index, newValue;
  printf("Enter the numberr of array elements : ");
  scanf("%d",&n);
   int VLA[n];
   
  printf("Enter %d elements:\n", n);
    for (int i=0; i<n; i++) {
        printf("Element : ");
        scanf("%d",&VLA[i]);
    }
      printf("\nOriginal array elements:\n");
    for (int i=0; i<n; i++) {
        printf("%d ",VLA[i]);
    }
     printf("\n\nEnter the index of the element you want to modify :") ;
    scanf("%d", &index);
    if (index >=0 && index < n) {
        printf("Enter the new value: ");
        scanf("%d", &newValue);
        VLA[index] = newValue;  
    } else {
        printf("Invalid index! \n");
        return 0;
    }
   printf("\nUpdated array elements:\n");
    for (int i=0; i<n; i++) {
        printf("%d ", VLA[i]);
    }
    printf("\n");
    return 0;}
