#ifndef album_h
#define album_h
#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

class Album{
string album_id;
string album_name;
string album_interpet;
string album_genre;

public:
void ausgabe();
void add(vector<Album>&sammlung);
};











#endif
