int main(void) {
  int n;
  printf("Wpisz liczbę elementów wektorów: \n");
  scanf("%d", &n);

  int a[n];
  int b[n];
  for (int i=0; i<n; i++){
    printf("Wpisz liczby pierwszego wektora: \n");
    scanf("%d", &a[i]);
  }


   for (int i=0; i<n; i++){
    printf("Wpisz liczby drugiego wektora: \n");
    scanf("%d", &b[i]);
     
  }
int suma=0;
int x=0;
  for(int c=0;c<n;c++){
    suma=a[c]*b[c];
    x+=suma;
  }
  printf("Iloczyn skalarny wektorów to: %d",x);
  return 0;}








  
 // printf("Wpisz liczbe przez ktora chcesz pomnozyc wektor: \n");
 // float k;
  //scanf("%f", &k);
  //for(int i=0; i<n; i++){
  //  b[i]=k*a[i];
 // }
//for(int i=0; i<n; i++){
  //  printf("\n b[%d]=%.2f", i, b[i]);
//  }
//  return 0;
//}

