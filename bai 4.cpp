#include<stdio.h>
int main(){
  
 
    float a,b,c,d,e,f,g;
  printf("nhap so a = ");
  scanf("%f",&a);
  printf("nhap so b = ");
  scanf("%f",&b);
  printf("nhap so c = ");
  scanf("%f",&c);
  d= a>b ? a:b;
  e=d>c ? d:c;
  printf("so lon nhat 3 so la : %f\n",e);
  f=a<b ? a:b;
  g=f<c ? f:c;
  printf("so nho nhat trong 3 so la %f\n",g);

return 0;
}
    
 

