#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

std::vector<int> a={5,9,6,8,2,7,41,0,3,85,69,74,77};

int najdi(const int i, int zacatek, int konec){
    int tmp;
    double help=ceil((konec-zacatek)/2)+1;
    tmp=(int)help;
    if (i==a[konec]){
        std::cout   <<  "mam to DPC"    <<  std::endl;
        std::cout   <<  konec;
        return 0;
    }
    else if (i==a[zacatek]){
        std::cout   <<  "mam to DPC"    <<  std::endl;
        std::cout   <<  zacatek;
        return 0;
    }
    else{}
    if (i<a[tmp]){
        najdi(i, zacatek, tmp);
    }
    else if (i>a[tmp]){
        najdi(i, tmp, konec);
    }
    else if(i==a[tmp]){
        std::cout   <<  "mam to DPC"    <<  std::endl;
        std::cout   <<  tmp;
        return 0;
    }
    else {
        std::cout   <<  "neni tu DPC";
        return 0;
    }
}

int main() {

    int i, zacatek, konec;
    std::sort(a.begin(), a.end());

    for (int i = 0; i < a.size(); ++i) {
        std::cout << a[i]   <<  " ";
    }
    std::cout   <<  std::endl;
    std::cout   << "co chces dpc?"  <<  std::endl;
    std::cin    >>  i;
    zacatek=0;
    konec=(int)a.size();
    najdi(i, zacatek, konec);


    return 0;
}