#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include "album.h"
#include "function.h"
using namespace std;

int main(){
vector<Album> sammlung{};
create_sammlung(sammlung);
//sammlung.at(0).ausgabe();
show(sammlung);
    system("pause");
}
