
#ifndef function_h
#define function_h
#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include "album.h"
class Album;



void create_sammlung(vector<Album>& sammlung);
void show(vector<Album>&sammlung);
void search(vector<Album>&sammlung);
void test(vector<Album>&sammlung);
void change(vector<Album>&sammlung);
void remove(vector<Album>&sammlung);

#endif
