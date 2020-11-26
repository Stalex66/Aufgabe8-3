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
friend void test(vector<Album>&sammlung);
void ausgabe();
void add(vector<Album>&sammlung);
friend void change(vector<Album>&sammlung);
friend void remove(vector<Album>&sammlung);
friend void search(vector<Album>&sammlung);
};











#endif
