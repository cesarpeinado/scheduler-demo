#include <stdio.h>

int main() {
  int a[5];
  int n, i;
  int w=1, b=1, c=1, d=1, e=1;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for(i=0; i<n; i++){
     
    if(a[0]==w){
        printf("0");
        w=0;
    }
    if(a[1]==b){
        printf("1");
        b=0;
    }
    if(a[2]==c){
        printf("2");
        c=0;
    }
    if(a[3]==d){
        printf("3");    
        d=0;
    }
    if(a[4]==e){
        printf("4");
        e=0;
    }

    if(w!=0 && b!=0 && c!=0 & d!=0 && e!=0){
        printf("-");
    }
  
    w++;
    b++;
    c++;
    d++;
    e++;
    
    printf("\n");
}
  
  return 0;
}
