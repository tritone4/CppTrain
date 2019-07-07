#include <iostream>
#include "all.h"

int main(){
    using namespace std;

    double f;
    double div;
    const auto rTick = M_PI / 128; 
    const auto nLP = 256;

    for (auto i=0; i<nLP; ++i){
      div = i * rTick;
      f = sin( div );
      cout << "sin(" << div << ") = " << f << endl;
    }

}
