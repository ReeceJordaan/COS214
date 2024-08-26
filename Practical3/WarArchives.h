#ifndef WARARCHIVES_H
#define WARARCHIVES_H

#include "TacticalMemento.h"
#include <iostream>
#include <string>
#include <map>

using namespace std;

class WarArchives
{
    public:
        void addTacticalMemento(TacticalMemento* memento, string label);
        TacticalMemento* getTacticalMemento(const std::string label);
        void removeTacticalMemento(string label);
        TacticalMemento* getMemento(const std::string& label) const;
        ~WarArchives();
        //Any other methods you might need

    private:
        map<string, TacticalMemento*> mementos;

};


#endif
