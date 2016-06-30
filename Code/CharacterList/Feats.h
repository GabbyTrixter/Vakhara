#ifndef FEATS_H
#define FEATS_H

#include<map>
#include<list>

class Feats
{
public:
    Feats();

private:
    map<string, int> feats;//Запугивание 10, Маскировка 3 и т.д

    list<string> languages;

    map<int, int> spells;//Сколько заклинаний какого уровня есть
    string specialisation;

    map<string, string> sphere; // Сферы жрецов

};

#endif // FEATS_H
