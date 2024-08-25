#ifndef WARARCHIVES_H
#define WARARCHIVES_H

#include "TacticalMemento.h"
#include <iostream>
#include <string>

using namespace std;

class WarArchives
{
    public:
        void addTacticalMemento(TacticalMemento* memento, string label);
        void removeTacticalMemento(string label);
        TacticalMemento* getMemento(const std::string& label) const;
        //Any other methods you might need

    private:
        map<string, TacticalMemento*> mementos;

};


#endif
