#include <stdio.h>

int summe(int a[]) {
    int i = 0;
    int summe = 0;
    for(i=0; i<=sizeof a/sizeof a[0];i++)
      {
          summe=summe+a[i];
      }
    return summe;
}

int main(){
    int array[3];
    array[0]=1;
    array[1]=4;
    array[2]=9;
    printf("%i",summe(array));
}
