#include "OpenFieldFactory.h"
#include "RiverbankFactory.h"
#include "WoodlandFactory.h"
#include "Legion.h"
#include "TacticalCommand.h"
#include <iostream>

int main() {
    std::cout << "========== TESTING ABSTRACT FACTORY ==========\n\n";

    // Testing OpenField units
    OpenFieldFactory openFieldFactory;
    Infantry* openFieldInfantry = openFieldFactory.createInfantry();
    Cavalry* openFieldCavalry = openFieldFactory.createCavalry();
    Artillery* openFieldArtillery = openFieldFactory.createArtillery();

    openFieldInfantry->move();
    openFieldCavalry->move();
    openFieldArtillery->move();
    std::cout << "\n";

    openFieldInfantry->attack();
    openFieldCavalry->attack();
    openFieldArtillery->attack();
    std::cout << "\n\n";

    // Testing Riverbank units
    RiverbankFactory riverbankFactory;
    Infantry* riverbankInfantry = riverbankFactory.createInfantry();
    Cavalry* riverbankCavalry = riverbankFactory.createCavalry();
    Artillery* riverbankArtillery = riverbankFactory.createArtillery();

    riverbankInfantry->move();
    riverbankCavalry->move();
    riverbankArtillery->move();
    std::cout << "\n";

    riverbankInfantry->attack();
    riverbankCavalry->attack();
    riverbankArtillery->attack();
    std::cout << "\n\n";

    // Testing Woodland units
    WoodlandFactory woodlandFactory;
    Infantry* woodlandInfantry = woodlandFactory.createInfantry();
    Cavalry* woodlandCavalry = woodlandFactory.createCavalry();
    Artillery* woodlandArtillery = woodlandFactory.createArtillery();

    woodlandInfantry->move();
    woodlandCavalry->move();
    woodlandArtillery->move();
    std::cout << "\n";

    woodlandInfantry->attack();
    woodlandCavalry->attack();
    woodlandArtillery->attack();

    std::cout << "\n========== TESTING STRATEGY AND MEMENTO ==========\n\n";

    TacticalCommand* command = new TacticalCommand(80, 50, true);
    command->chooseBestStrategy();
    command->executeStrategy();
    delete command;
    std::cout << "\n";
    
    command = new TacticalCommand(50, 80, true);
    command->chooseBestStrategy();
    command->executeStrategy();
    delete command;
    std::cout << "\n";

    command = new TacticalCommand(100, 80, false);
    command->chooseBestStrategy();
    command->executeStrategy();
    delete command;

    std::cout << "\n========== TESTING COMPOSITE ==========\n\n";

    Legion legion = Legion();

    std::cout << "Adding units to the legion..." << std::endl;
    legion.add(openFieldInfantry);
    legion.add(openFieldCavalry);
    legion.add(openFieldArtillery);
    legion.add(riverbankInfantry);
    legion.add(riverbankCavalry);
    legion.add(riverbankArtillery);
    legion.add(woodlandInfantry);
    legion.add(woodlandCavalry);
    legion.add(woodlandArtillery);

    legion.size();
    std::cout << "\n";

    //legion.toString(); create a fancy toString for bonus marks?

    legion.move();
    legion.attack();
    std::cout << "\n";

    std::cout << "Removing units from the legion..." << std::endl;
    legion.remove(openFieldInfantry);
    legion.remove(openFieldCavalry);
    legion.remove(openFieldArtillery);
    legion.remove(riverbankInfantry);
    legion.remove(riverbankCavalry);
    legion.remove(riverbankArtillery);
    legion.remove(woodlandInfantry);
    legion.remove(woodlandCavalry);
    legion.remove(woodlandArtillery);

    legion.size();
    std::cout << "\n";

    delete openFieldInfantry;
    delete openFieldCavalry;
    delete openFieldArtillery;
    delete riverbankInfantry;
    delete riverbankCavalry;
    delete riverbankArtillery;
    delete woodlandInfantry;
    delete woodlandCavalry;
    delete woodlandArtillery;

    return 0;
}
