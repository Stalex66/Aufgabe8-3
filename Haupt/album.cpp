#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include "album.h"
using namespace std;

void Album::ausgabe(){
  cout << album_id << "-->" << album_name << " " << album_interpet << " " << album_genre << "\n"; // Id ausgabe geht noch nicht
}
void Album::add(vector<Album>&sammlung) {
    cout << "Please enter a new Ablum with the name, interpret and the genre \n";
    string name;
    string interpret;
    string genre;
    cin >> name >> interpret >> genre;
    Album album;
    album.album_id = sammlung.size();
    album.album_name = name;
    album.album_interpet = interpret;
    album.album_genre = genre;
    sammlung.push_back(album);
}

void Album::change(vector<Album>&sammlung){
    cout << "Please enter the album you want to modify (ID) you can show the list to find ID";
}
void Album::remove(vector<Album>&sammlung){

}



void search(vector<Album>&sammlung){

}