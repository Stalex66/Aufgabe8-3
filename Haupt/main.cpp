#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include "album.h"
#include "function.h"
using namespace std;

int main(){
    vector<Album> sammlung{};
    test(sammlung);
    bool stop{true};
    while(stop){
        cout << "\n" <<"------------------------" <<"\n"<< "choose Operation\n" << "1:Enter (new) Albums\n" << "2:Search\n" << "3: show list\n" << "4:delete Album\n" << "5: change Album\n" << "6: to exit Programm\n";
        int input;
        cin >> input;
        switch(input){
            case 1: create_sammlung(sammlung); break;
            case 2: search(sammlung); break;
            case 3: show(sammlung); break;
            case 4: remove(sammlung); break;
            case 5: change(sammlung); break;
            case 6: stop = false; break;

            default: "error not valid input";
        }

    }
    system("pause");




}
