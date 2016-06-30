#ifndef GENERALINFO_H
#define GENERALINFO_H

#include<string>
#include<vector>

class GeneralInfo
{
public:
    GeneralInfo();

private:
    int hits;
    int baseDefend;
    map<string, int> savingThrows;

    string name;
    string race;
    string gender;
    string features;

    int age;
    int weight;
    int size;//Размер - крошечный-маленький-большой-огромный, или что там
    int height;// Высота обычная
    string charClass;//Пока строками, потом уже решать, что как
    // Предположительно, у монстров класс monster?

    string alignment;//Мировоззрение
    string religion;//Вся эта муть, которая сейчас строками, по сути, каждая отдельный класс

    vector<int> stats;

};

#endif // GENERALINFO_H
