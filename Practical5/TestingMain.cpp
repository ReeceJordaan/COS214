#include "Light.h"
#include "DoorLock.h"
#include "Thermostat.h"
#include "SmartHomeSystem.h"
#include "MacroRoutine.h"
#include "TurnOffLightsCommand.h"
#include "LockDoorsCommand.h"
#include "SetTemperatureCommand.h"
#include "LightSensor.h"
#include "DoorSensor.h"
#include "ThermostatSensor.h"

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
    std::cout << "========== Testing Lights (Leaf) ==========\n" << std::endl;

    Light light1 = Light(false);
    Light light2 = Light(false);
    Light light3 = Light(false);
    Light light4 = Light(false);

    std::cout << "Object 'light1': " << light1.getDeviceType() << "'s status is \t" << (light1.getStatus() == 0 ? "OFF" : "ON") << "\t before any action has been performed.\n" << std::endl;

    
    light1.performAction();
    std::cout << "Object 'light1': " << light1.getDeviceType() << "'s status is \t" << (light1.getStatus() == 0 ? "OFF" : "ON") << "\t before any action has been performed.\n" << std::endl;

    light1.performAction();
    std::cout << "Object 'light1': " << light1.getDeviceType() << "'s status is \t" << (light1.getStatus() == 0 ? "OFF" : "ON") << "\t before any action has been performed.\n" << std::endl;

    std::cout << "========== Testing DoorLocks (Leaf) ==========\n" << std::endl;
    
    DoorLock doorLock1 = DoorLock(false);
    DoorLock doorLock2 = DoorLock(false);

    std::cout << "Object 'doorLock1': " << doorLock1.getDeviceType() << "'s status is \t" << (doorLock1.getStatus() == 0 ? "UNLOCKED" : "LOCKED") << "\t before any action has been performed.\n" << std::endl;
    
    doorLock1.performAction();
    std::cout << "Object 'doorLock1': " << doorLock1.getDeviceType() << "'s status is \t" << (doorLock1.getStatus() == 0 ? "UNLOCKED" : "LOCKED") << "\t\t before any action has been performed.\n" << std::endl;

    doorLock1.performAction();
    std::cout << "Object 'doorLock1': " << doorLock1.getDeviceType() << "'s status is \t" << (doorLock1.getStatus() == 0 ? "UNLOCKED" : "LOCKED") << "\t before any action has been performed.\n" << std::endl;

    std::cout << "========== Testing Thermostat (Leaf) ==========\n" << std::endl;

    Thermostat thermostat = Thermostat(false);

    std::cout << "Object 'thermostat': " << thermostat.getDeviceType() << "'s status is \t" << (thermostat.getStatus() == 0 ? "OFF" : "ON") << "\t before any action has been performed.\n" << std::endl;
    
    thermostat.performAction();
    std::cout << "Object 'thermostat': " << thermostat.getDeviceType() << "'s status is \t" << (thermostat.getStatus() == 0 ? "OFF" : "ON") << "\t before any action has been performed.\n" << std::endl;

    thermostat.performAction();
    std::cout << "Object 'thermostat': " << thermostat.getDeviceType() << "'s status is \t" << (thermostat.getStatus() == 0 ? "OFF" : "ON") << "\t before any action has been performed.\n" << std::endl;

    std::cout << "========== Testing Smart Home System (Composite) ==========\n" << std::endl;

    SmartHomeSystem smartHome = SmartHomeSystem(false);

    std::cout << "Adding devices (in varying states) to the smart home system...\n" << std::endl;

    smartHome.add(&light1);
    smartHome.add(&light2);
    light3.performAction();
    light4.performAction();
    smartHome.add(&light3);
    smartHome.add(&light4);

    smartHome.add(&doorLock1);
    doorLock2.performAction();
    smartHome.add(&doorLock2);

    smartHome.add(&thermostat);

    smartHome.getStatus(); // Expected: all devices are off/unlocked
    std::cout << std::endl << std::endl;
    
    smartHome.performAction(); 
    std::cout << std::endl;
    smartHome.getStatus(); // Expected: all devices are on/locked
    std::cout << std::endl << std::endl; 

    smartHome.performAction();
    std::cout << std::endl;
    smartHome.getStatus(); // Expected: all devices are off/unlocked
    std::cout << std::endl << std::endl;

    std::cout << "Removing devices from the smart home system...\n" << std::endl;
    smartHome.remove(&light2);
    smartHome.remove(&light3);
    smartHome.remove(&light4);
    smartHome.remove(&doorLock2);
    std::cout << std::endl;

    std::cout << "Checking child devices of the smart home system..." << std::endl;
    std::cout << "The 1st item in the " << smartHome.getDeviceType() << " is a " << smartHome.getChild(0)->getDeviceType() << std::endl;
    std::cout << "The 2st item in the " << smartHome.getDeviceType() << " is a " << smartHome.getChild(1)->getDeviceType() << std::endl;
    std::cout << "The 3st item in the " << smartHome.getDeviceType() << " is a " << smartHome.getChild(2)->getDeviceType() << std::endl;
    std::cout << std::endl;

    smartHome.getStatus();
}