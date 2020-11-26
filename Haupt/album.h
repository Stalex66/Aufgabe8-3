#ifndef album_h
#define album_h
#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

class Album{
int album_id;
string album_name;
string album_interpet;
string album_genre;

public:
void ausgabe();
void add(vector<Album>&sammlung);
void change(vector<Album>&sammlung);
void remove(vector<Album>&sammlung);
void search(vector<Album>&sammlung);
};











#endif
