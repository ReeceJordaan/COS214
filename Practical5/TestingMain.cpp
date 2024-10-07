#include "Light.h"
#include "DoorLock.h"
#include "Thermostat.h"
#include "SmartHomeSystem.h"
#include "MacroRoutine.h"
#include "TurnOffLightsCommand.h"
#include "LockDoorsCommand.h"
#include "SetTemperatureCommand.h"

static void CompositeTest();
static void AdapterTest();
static void CommandTest();
static void ObserverTest();

int main() {
    CompositeTest();
    AdapterTest();
    CommandTest();
    ObserverTest();
}

static void CompositeTest() {
    std::cout << "========== Testing Lights, DoorLocks, Thermostat and SmartHomeSystem ==========\n" << std::endl;

    // Testing Light class
    Light light1 = Light(false);
    Light light2 = Light(false);
    Light light3 = Light(false);
    Light light4 = Light(false);

    std::cout << "Object 'light1': " << light1.getDeviceType() << "'s status is " << light1.getStatus() << " before any action has been performed. (Off)" << std::endl;
    
    light1.performAction();
    std::cout << "Object 'light1': " << light1.getDeviceType() << "'s status is " << light1.getStatus() << " after an action has been performed. (On)" << std::endl;

    light1.performAction();
    std::cout << "Object 'light1': " << light1.getDeviceType() << "'s status is " << light1.getStatus() << " after an action has been performed. (Off)" << std::endl;

    // Testing DoorLock class
    DoorLock doorLock1 = DoorLock(false);
    DoorLock doorLock2 = DoorLock(false);

    std::cout << "Object 'doorLock1': " << doorLock1.getDeviceType() << "'s status is " << doorLock1.getStatus() << " before any action has been performed. (Unlocked)" << std::endl;
    
    doorLock1.performAction();
    std::cout << "Object 'doorLock1': " << doorLock1.getDeviceType() << "'s status is " << doorLock1.getStatus() << " after an action has been performed. (Locked)" << std::endl;

    doorLock1.performAction();
    std::cout << "Object 'doorLock1': " << doorLock1.getDeviceType() << "'s status is " << doorLock1.getStatus() << " after an action has been performed. (Unlocked)" << std::endl;

    // Testing Thermostat class
    Thermostat thermostat = Thermostat(false);

    std::cout << "Object 'thermostat': " << thermostat.getDeviceType() << "'s status is " << thermostat.getStatus() << " before any action has been performed. (Off)" << std::endl;
    
    thermostat.performAction();
    std::cout << "Object 'thermostat': " << thermostat.getDeviceType() << "'s status is " << thermostat.getStatus() << " after an action has been performed. (On)" << std::endl;

    thermostat.performAction();
    std::cout << "Object 'thermostat': " << thermostat.getDeviceType() << "'s status is " << thermostat.getStatus() << " after an action has been performed. (Off)" << std::endl;

    // Testing SmartHomeSystem class
    SmartHomeSystem smartHome = SmartHomeSystem(false);

    std::cout << "Adding devices to the smart home system...\n" << std::endl;
    smartHome.add(&light1);
    smartHome.add(&light2);
    smartHome.add(&light3);
    smartHome.add(&light4);

    smartHome.add(&doorLock1);
    smartHome.add(&doorLock2);

    smartHome.add(&thermostat);

    smartHome.getStatus(); // All devices are off/unlocked
    
    smartHome.performAction(); 
    smartHome.getStatus(); // All devices are on/locked

    smartHome.performAction();
    smartHome.getStatus(); // All devices are off/unlocked

    std::cout << "Removing devices from the smart home system...\n" << std::endl;
    smartHome.remove(&light2);
    smartHome.remove(&light3);
    smartHome.remove(&light4);

    smartHome.remove(&doorLock2);

    std::cout << "Checking child devices of the smart home system...\n" << std::endl;
    std::cout << "The 1st item in the " << smartHome.getDeviceType() << " is a " << smartHome.getChild(0)->getDeviceType() << std::endl;
    std::cout << "The 2st item in the " << smartHome.getDeviceType() << " is a " << smartHome.getChild(1)->getDeviceType() << std::endl;
    std::cout << "The 3st item in the " << smartHome.getDeviceType() << " is a " << smartHome.getChild(2)->getDeviceType() << std::endl;
}

static void AdapterTest() {

}

static void CommandTest() {
    std::cout << "========== Testing TurnOffLights, LockDoors and SetTemperature commands ==========\n" << std::endl;

    Light light1 = Light(true);
    DoorLock doorLock1 = DoorLock(false);
    Light light1 = Light(true);

    MacroRoutine nightRoutine = MacroRoutine();
    nightRoutine.AddProcedure(new TurnOffLightsCommand(&light1));

}

static void ObserverTest() {

}