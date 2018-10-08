#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <cstring>
int tancuj(char* filename){

    std::ifstream ifs;
    std::string tmp;
    int pomocna=0;
    std::vector<int> A;
    std::vector<int> B;
    ifs.open(filename);
    std::string::size_type sz;
    if (ifs.is_open()){
        while(!ifs.eof()) {
            std::getline(ifs, tmp, ' ');
            /*for (int i = 0; i <tmp.length() ; ++i) {
                pomocna*=10;
                pomocna+=tmp[i]-48;
            }*/
            pomocna=std::stoi (tmp, &sz);
            A.push_back(pomocna);
            pomocna=0;

            std::getline(ifs, tmp, '\n');
            pomocna=std::stoi (tmp, &sz);
            /*for (int i = 0; i <tmp.length() ; ++i) {
                pomocna*=10;
                pomocna+=tmp[i]-48;
            }*/
            B.push_back(pomocna);
            pomocna=0;


        }
        for (auto k = 0; k < A.size(); ++k) {
            std::cout  <<  A[k] <<  "\t";
        }
        std::cout <<    std::endl;
        for (auto k = 0; k < B.size(); ++k) {
            std::cout  <<  B[k] <<  "\t";
        }

    }else{
        std::cout   <<  "nekde nastala chyba"   <<  std::endl;
        return 1;
    }
}
int merde(int xA, int yA, int xB, int yB);

int main() {
    tancuj("in.txt");


    return 0;
}