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

void show(vector<Album>&sammlung) {
    for (auto &v : sammlung)
        v.ausgabe();
}
void search(vector<Album>&sammlung){
    cout << "Enter seach criterium \n" << "1:ID\n" << "2:name\n" << "3:interpret\n" << "4:genre\n" << "Enter number....";
    int i{0};
    cin >> i;
    string input;
    int z;


    switch(i) {
        case 1:
            cout << "Please enter id \n";
            cin >> z;
            for (size_t j = {0}; j<sammlung.size();j++){
                if(sammlung.at(j).album_id == z){
                    sammlung.at(j).ausgabe();
                }}
            break;
        case 2:
            cout << "Enter input \n";
            cin >> input;
            for (size_t j = {0}; j<sammlung.size();j++){
                if(sammlung.at(j).album_name == input){
                    sammlung.at(j).ausgabe();
                }}
            break;
        case 3:
            cout << "Enter input \n";
            cin >> input;
            for (size_t j = {0}; j<sammlung.size();j++){
                if(sammlung.at(j).album_interpet == input){
                    sammlung.at(j).ausgabe();

                }}
            break;
        case 4:
            cout << "Enter input \n";
            cin >> input;
            for (size_t j = {0};j<sammlung.size();j++){
                if(sammlung.at(j).album_genre == input){
                    sammlung.at(j).ausgabe();
                }}
            break;

        default: cout << "invalid input";

    }
}

void test(vector<Album>&sammlung) {
    Album eins;
    Album zwei;
    Album drei;
    eins.album_id = 0;
    eins.album_interpet = "ACDC";
    eins.album_name = "Thunder";
    eins.album_genre = "Rock";
    zwei.album_id = 1;
    zwei.album_interpet = "ACDC";
    zwei.album_name = "Thunderstruck";
    zwei.album_genre = "Rock";
    drei.album_id = 2;
    drei.album_interpet = "Beatles";
    drei.album_name = "Songs of tomorrow";
    drei.album_genre = "pop";
    sammlung.push_back(eins);
    sammlung.push_back(zwei);
    sammlung.push_back(drei);
}

void change(vector<Album>&sammlung){
    cout << "Please enter the album you want to modify (ID) you can show the list to find ID";
    int y;
    cin >> y;
    cout << "Bitte neue Werte eingeben Name, Interpret, Genre";
    string name;
    string interpret;
    string genre;
    sammlung.at(y).album_genre = name;
    sammlung.at(y).album_interpet = interpret;
    sammlung.at(y).album_genre = genre;

}
void remove(vector<Album>&sammlung){
    cout << "Please enter the album you want to ´remove (ID) you can show the list to find ID";
    int z;
    cin >> z;
    sammlung.erase(sammlung.begin()+z);
}