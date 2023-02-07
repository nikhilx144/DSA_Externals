include<stdio.h> 
int main(){
  int i;
  for (i = 1; i <= 90; i++){
    if ((i >= 1 && i <= 40) || (i >= 60 && i <= 90)) printf("%d\n", i);
  }
}