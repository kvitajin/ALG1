
#include <iostream>
int main(){
    int pole[3]={1,2,3};
    std::cout   <<  1[pole];
}
void insert(int a[], const int N){
    for (int i = 1; i < N; ++i) {
        int v=a[i];
        int j=i;
        while(j>0){
            if (a[j-1]>v){
                a[j]=a[j-1];
                --j;
            }else{
                break;
            }
        }
        a[j]=v;
    }
}