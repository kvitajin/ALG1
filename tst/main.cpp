#include <iostream>
#include <vector>
#include <cmath>

void Clear(std::vector<std::vector <bool> > &matrix, const int &N){
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            matrix[i][j]= false;
        }
    }
}
void Fill(std::vector<std::vector <bool> > &matrix, const int &N){
    int tmp=(int)((double)N/3);
    int tmp2=(int)(2*((double)N/3));


    for (int i = 0; i < N; ++i) {
        matrix[tmp][i]      =   true;
        matrix[tmp2][i]    =   true;
        matrix[i][tmp]      =   true;
        matrix[i][tmp2]    =   true;
    }
}
void Print(std::vector<std::vector <bool> > &matrix, const int &N){
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (matrix[i][j]==true){
                std::cout   <<  "*";
            }else{
                std::cout   <<  " ";
            }
        }
        std::cout   <<  std::endl;
    }
}
int main() {
    std::vector<std::vector <bool> > matrix;
    int N;
    std::cout   <<  "Zadejte N: "   <<std::endl;
    std::cin    >>  N;
    matrix.resize(N);
    for (int i = 0; i < N; ++i) {
        matrix[i].resize(N);
    }
    Clear(matrix, N);
    Fill(matrix, N);
    Print(matrix, N);



    return 0;
}