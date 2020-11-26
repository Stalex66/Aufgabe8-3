#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include "function.h"
using namespace std;


void create_sammlung(vector<Album>& sammlung){
        cout << "How many albums do you want to add? enter number";
        int amount;
        Album temp;
        cin >> amount;
        for(size_t i{0}; i < amount; i++)
            temp.add(sammlung);





}
