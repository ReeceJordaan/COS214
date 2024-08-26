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
    Infantry* openFieldInfantry = openFieldFactory.createInfantry(70, 60, 50);
    Cavalry* openFieldCavalry = openFieldFactory.createCavalry(70, 60, 50);
    Artillery* openFieldArtillery = openFieldFactory.createArtillery(70, 60, 50);

    openFieldInfantry->move();
    openFieldCavalry->move();
    openFieldArtillery->move();
    std::cout << "\n";

    openFieldInfantry->fight();
    openFieldCavalry->fight();
    openFieldArtillery->fight();
    std::cout << "\n\n";

    // Testing Riverbank units
    RiverbankFactory riverbankFactory;
    Infantry* riverbankInfantry = riverbankFactory.createInfantry(60, 50, 40);
    Cavalry* riverbankCavalry = riverbankFactory.createCavalry(60, 50, 40);
    Artillery* riverbankArtillery = riverbankFactory.createArtillery(60, 50, 40);

    riverbankInfantry->move();
    riverbankCavalry->move();
    riverbankArtillery->move();
    std::cout << "\n";

    riverbankInfantry->fight();
    riverbankCavalry->fight();
    riverbankArtillery->fight();
    std::cout << "\n\n";

    // Testing Woodland units
    WoodlandFactory woodlandFactory;
    Infantry* woodlandInfantry = woodlandFactory.createInfantry(50, 40, 30);
    Cavalry* woodlandCavalry = woodlandFactory.createCavalry(50, 40, 30);
    Artillery* woodlandArtillery = woodlandFactory.createArtillery(50, 40, 30);

    woodlandInfantry->move();
    woodlandCavalry->move();
    woodlandArtillery->move();
    std::cout << "\n";

    woodlandInfantry->fight();
    woodlandCavalry->fight();
    woodlandArtillery->fight();

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

    Legion legion = Legion(500, 400, 300);

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
    legion.fight();
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
