#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,rows;
    printf("Enter number of rows you want: ");
    scanf("%d",&rows);
    printf("Pyramid pattern 1\n");
    for (i=1; i<=rows; i++){
      for (j=1; j<=rows-i; j++){
      printf(" ");
  }

for(j=1; j<i; j++) {
printf("%d ",j);
}
  printf("\n");
}
    return 0;
}
