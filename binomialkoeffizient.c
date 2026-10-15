#include <stdio.h> 

int FAKULTAT1(int n) {

int x, sum1;
x = 0;
sum1 = 1;
for(int i = 1; i <= n; i++){
x = x + 1;
sum1 = x * sum1;
}
return sum1;    
}

int FAKULTAT2(int n, int k) {

int x, sum2;
x = 0;
sum2 = 1;
for(int i = 1; i <= n-k; i++){
x = x + 1;
sum2 = x * sum2;
}
return sum2;     
}
 
int main(){

int Fakultät = FAKULTAT1(5);
int Fakultät_ = FAKULTAT1(4);
int Fakultät__ = FAKULTAT2(5,4); 

int Binomialkoeffizient = (Fakultät/(Fakultät_*Fakultät__)); 
printf("%d\n", Binomialkoeffizient); 
    return 0; 
}