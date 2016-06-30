#ifndef CHARACTERLIST_H
#define CHARACTERLIST_H
#include "Feats.h"
#include "Generalinfo.h"
#include "Inventory.h"

class CharacterList
{
public:
    CharacterList();
private:
    Feats feats;
    GeneralInfo general;
    Inventory inventory;
};

#endif // CHARACTERLIST_H
