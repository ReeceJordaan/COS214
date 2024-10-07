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
#include "LegacyLight.h"
#include "SmartLightIntegrator.h"
#include "LegacyDoorLock.h"
#include "SmartDoorLockIntegrator.h"
#include "LegacyThermostat.h"
#include "SmartThermostatIntegrator.h"

static void CompositeTest();
static void CommandTest();
static void ObserverTest();
static void AdapterTest();

int main() {
    CompositeTest();
    CommandTest();
    ObserverTest();
    AdapterTest();
}

static void CompositeTest() {
    std::cout << "======================================== Testing Lights (Leaf) ========================================\n" << std::endl;

    Light light1 = Light(false);
    Light light2 = Light(false);
    Light light3 = Light(false);
    Light light4 = Light(false);

    std::cout << "Object 'light1': " << light1.getDeviceType() << "'s status is \t" << (light1.getStatus() == 0 ? "OFF" : "ON") << "\t before any action has been performed.\n" << std::endl;

    
    light1.performAction();
    std::cout << "Object 'light1': " << light1.getDeviceType() << "'s status is \t" << (light1.getStatus() == 0 ? "OFF" : "ON") << "\t after an action has been performed.\n" << std::endl;

    light1.performAction();
    std::cout << "Object 'light1': " << light1.getDeviceType() << "'s status is \t" << (light1.getStatus() == 0 ? "OFF" : "ON") << "\t after an action has been performed.\n" << std::endl;

    std::cout << "======================================== Testing DoorLocks (Leaf) ========================================\n" << std::endl;
    
    DoorLock doorLock1 = DoorLock(false);
    DoorLock doorLock2 = DoorLock(false);

    std::cout << "Object 'doorLock1': " << doorLock1.getDeviceType() << "'s status is \t" << (doorLock1.getStatus() == 0 ? "UNLOCKED" : "LOCKED") << "\t before any action has been performed.\n" << std::endl;
    
    doorLock1.performAction();
    std::cout << "Object 'doorLock1': " << doorLock1.getDeviceType() << "'s status is \t" << (doorLock1.getStatus() == 0 ? "UNLOCKED" : "LOCKED") << "\t\t after an action has been performed.\n" << std::endl;

    doorLock1.performAction();
    std::cout << "Object 'doorLock1': " << doorLock1.getDeviceType() << "'s status is \t" << (doorLock1.getStatus() == 0 ? "UNLOCKED" : "LOCKED") << "\t after an action has been performed.\n" << std::endl;

    std::cout << "======================================== Testing Thermostat (Leaf) ========================================\n" << std::endl;

    Thermostat thermostat = Thermostat(false);

    std::cout << "Object 'thermostat': " << thermostat.getDeviceType() << "'s status is \t" << (thermostat.getStatus() == 0 ? "OFF" : "ON") << "\t before any action has been performed.\n" << std::endl;
    
    thermostat.performAction();
    std::cout << "Object 'thermostat': " << thermostat.getDeviceType() << "'s status is \t" << (thermostat.getStatus() == 0 ? "OFF" : "ON") << "\t after an action has been performed.\n" << std::endl;

    thermostat.performAction();
    std::cout << "Object 'thermostat': " << thermostat.getDeviceType() << "'s status is \t" << (thermostat.getStatus() == 0 ? "OFF" : "ON") << "\t after an action has been performed.\n" << std::endl;

    std::cout << "======================================== Testing Smart Home System (Composite) ========================================\n" << std::endl;

    SmartHomeSystem smartHome = SmartHomeSystem(false);

    std::cout << "Adding devices (in varying states) to the smart home system...\n\n" << std::endl;

    smartHome.add(&light1);
    smartHome.add(&light2);
    light3.setStatus(true);
    light4.setStatus(true);
    smartHome.add(&light3);
    smartHome.add(&light4);

    smartHome.add(&doorLock1);
    doorLock2.setStatus(true);
    smartHome.add(&doorLock2);

    smartHome.add(&thermostat);

    smartHome.getStatus(); // Expected: varying device statuses
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
    std::cout << "The 1st item in the smart home system is a " << smartHome.getChild(0)->getDeviceType() << std::endl;
    std::cout << "The 2st item in the smart home system is a " << smartHome.getChild(1)->getDeviceType() << std::endl;
    std::cout << "The 3st item in the smart home system is a " << smartHome.getChild(2)->getDeviceType() << std::endl;
    std::cout << std::endl;

    std::cout << smartHome.getDeviceType();
}

static void CommandTest() {
    std::cout << "======================================== Testing TurnOffLights, LockDoors and SetTemperature commands ========================================\n" << std::endl;

    // Scenario: 4 Lights, all ON. 2 DoorLocks, UNLOCKED. 1 Thermostat, OFF.
    Light light1 = Light(true);
    Light light2 = Light(true);
    Light light3 = Light(true);
    Light light4 = Light(true);
    DoorLock doorLock1 = DoorLock(false);
    DoorLock doorLock2 = DoorLock(false);
    Thermostat thermostat = Thermostat(false);

    TurnOffLightsCommand lightCommand1 = TurnOffLightsCommand(&light1);
    TurnOffLightsCommand lightCommand2 = TurnOffLightsCommand(&light2);
    TurnOffLightsCommand lightCommand3 = TurnOffLightsCommand(&light3);
    TurnOffLightsCommand lightCommand4 = TurnOffLightsCommand(&light4);
    LockDoorsCommand doorCommand1 = LockDoorsCommand(&doorLock1);
    LockDoorsCommand doorCommand2 = LockDoorsCommand(&doorLock2);
    SetTemperatureCommand temperatureCommand = SetTemperatureCommand(&thermostat);

    MacroRoutine nightRoutine = MacroRoutine();
    nightRoutine.AddProcedure(&lightCommand1);
    nightRoutine.AddProcedure(&lightCommand2);
    nightRoutine.AddProcedure(&lightCommand3);
    nightRoutine.AddProcedure(&lightCommand4);
    nightRoutine.AddProcedure(&doorCommand1);
    nightRoutine.AddProcedure(&doorCommand2);
    nightRoutine.AddProcedure(&temperatureCommand);

    std::cout << "Executing night time routine. Good night!\n" << std::endl;
    nightRoutine.execute();

    std::cout << "\nRemoving some commands from night time routine.\n" << std::endl;
    nightRoutine.RemoveProcedure(&lightCommand3);
    nightRoutine.RemoveProcedure(&lightCommand4);
    nightRoutine.RemoveProcedure(&doorCommand2);

    // Resetting devices
    light1.setStatus(true);
    light2.setStatus(true);
    light3.setStatus(true);
    light4.setStatus(true);
    doorLock1.setStatus(false);
    doorLock2.setStatus(false);
    thermostat.setStatus(false);

    std::cout << "Executing smaller night time routine. Good night!\n" << std::endl;
    nightRoutine.execute();
}

static void ObserverTest() {
    std::cout << "\n======================================== Testing LightSensor ========================================\n" << std::endl;

    LightSensor lightSensor = LightSensor();
    Light light1 = Light(false);
    Light light2 = Light(false);

    std::cout << "Adding Lights to the LightSensor...\n" << std::endl;

    lightSensor.addDevice(&light1);
    lightSensor.addDevice(&light2);

    std::cout << "The LightSensor detects movement and it's state is updated...\n" << std::endl;
    lightSensor.setMotionDetected(true); // Simulate motion being detected (lights turn on).
    lightSensor.notifyDevices();
    std::cout << std::endl;

    lightSensor.removeDevice(&light2);

    std::cout << "\nMovment is no longer detected and the LightSensor updates it's state...\n" << std::endl;
    lightSensor.setMotionDetected(false); // Simulate motion not being detected (lights turn off).
    lightSensor.notifyDevices();

    std::cout << "\n======================================== Testing DoorSensor ========================================\n" << std::endl;

    DoorSensor doorSensor = DoorSensor();
    DoorLock doorLock1 = DoorLock(false);
    DoorLock doorLock2 = DoorLock(false);

    std::cout << "Adding DoorLocks to the DoorSensor...\n" << std::endl;

    doorSensor.addDevice(&doorLock1);
    doorSensor.addDevice(&doorLock2);

    std::cout << "The DoorSensor detects a period of inactivity and it's state is updated...\n" << std::endl;
    doorSensor.setInactivityDetected(true); // Simulate inactivity being detected (Door locks).
    doorSensor.notifyDevices();
    std::cout << std::endl;

    doorSensor.removeDevice(&doorLock2);
    doorLock1.setStatus(false); // Unlock door with key or finger print

    std::cout << "\nThe DoorSensor detects a period of inactivity and it's state is updated...\n" << std::endl;
    doorSensor.setInactivityDetected(true); // Simulate inactivity being detected (Door locks).
    doorSensor.notifyDevices();

    std::cout << "\n======================================== Testing ThermostatSensor ========================================\n" << std::endl;

    ThermostatSensor thermostatSensor = ThermostatSensor();
    Thermostat thermostat1 = Thermostat(false);
    Thermostat thermostat2 = Thermostat(false);

    std::cout << "Adding Thermostats to the ThermostatSensor...\n" << std::endl;

    thermostatSensor.addDevice(&thermostat1);
    thermostatSensor.addDevice(&thermostat2);

    std::cout << "The ThermostatSensor reaches it's threshold temperature and it's state is updated...\n" << std::endl;
    thermostatSensor.setThresholdReached(true); // Simulate thermostat turning on automatically when a certain temperature is reached.
    thermostatSensor.notifyDevices();
    std::cout << std::endl;

    thermostatSensor.removeDevice(&thermostat2);

    std::cout << "\nThe ThermostatSensor reaches an acceptable temperature and it's state is updated...\n" << std::endl;
    thermostatSensor.setThresholdReached(false); // Simulate thermostat turning off automatically when a certain temperature is reached.
    thermostatSensor.notifyDevices();
}

static void AdapterTest() {
    std::cout << "\n======================================== Testing Light Adapter ========================================\n" << std::endl;

    LegacyLight legacyLight = LegacyLight(false);
    SmartLightIntegrator lightIntegrator = SmartLightIntegrator(&legacyLight);

    std::cout << lightIntegrator.getDeviceType() << "'s status is \t" << (lightIntegrator.getStatus() == 0 ? "OFF" : "ON") << "\t before any action has been performed.\n" << std::endl;

    lightIntegrator.performAction();
    std::cout << lightIntegrator.getDeviceType() << "'s status is \t" << (lightIntegrator.getStatus() == 0 ? "OFF" : "ON") << "\t after an action has been performed.\n" << std::endl;

    lightIntegrator.performAction();
    std::cout << lightIntegrator.getDeviceType() << "'s status is \t" << (lightIntegrator.getStatus() == 0 ? "OFF" : "ON") << "\t after an action has been performed.\n" << std::endl;

    std::cout << "\n======================================== Testing DoorLock Adapter ========================================\n" << std::endl;

    LegacyDoorLock legacyDoorLock = LegacyDoorLock(false);
    SmartDoorLockIntegrator doorLockIntegrator = SmartDoorLockIntegrator(&legacyDoorLock);

    std::cout << doorLockIntegrator.getDeviceType() << "'s status is \t" << (doorLockIntegrator.getStatus() == 0 ? "UNLOCKED" : "LOCKED") << "\t before any action has been performed.\n" << std::endl;

    doorLockIntegrator.performAction();
    std::cout << doorLockIntegrator.getDeviceType() << "'s status is \t" << (doorLockIntegrator.getStatus() == 0 ? "UNLOCKED" : "LOCKED") << "\t after an action has been performed.\n" << std::endl;

    doorLockIntegrator.performAction();
    std::cout << doorLockIntegrator.getDeviceType() << "'s status is \t" << (doorLockIntegrator.getStatus() == 0 ? "UNLOCKED" : "LOCKED") << "\t after an action has been performed.\n" << std::endl;

    std::cout << "\n======================================== Testing Thermostat Adapter ========================================\n" << std::endl;

    LegacyThermostat legacyThermostat = LegacyThermostat(false, 25);
    SmartThermostatIntegrator thermostatIntegrator = SmartThermostatIntegrator(&legacyThermostat);

    std::cout << thermostatIntegrator.getDeviceType() << "'s status is \t" << (thermostatIntegrator.getStatus() == 0 ? "OFF" : "ON") << "\t before any action has been performed.\n" << std::endl;

    thermostatIntegrator.performAction();
    std::cout << thermostatIntegrator.getDeviceType() << "'s status is \t" << (thermostatIntegrator.getStatus() == 0 ? "OFF" : "ON") << "\t after an action has been performed.\n" << std::endl;

    thermostatIntegrator.performAction();
    std::cout << thermostatIntegrator.getDeviceType() << "'s status is \t" << (thermostatIntegrator.getStatus() == 0 ? "OFF" : "ON") << "\t after an action has been performed.\n" << std::endl;

    std::cout << "\n======================================== Testing Composite with Adapter ========================================\n" << std::endl;

    SmartHomeSystem smartHome = SmartHomeSystem(false);

    std::cout << "Adding adapted legacy devices to the smart home system...\n\n" << std::endl;

    smartHome.add(&lightIntegrator);
    smartHome.add(&doorLockIntegrator);
    smartHome.add(&thermostatIntegrator);

    std::cout << smartHome.getDeviceType();
    std::cout << std::endl << std::endl;

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

    std::cout << "Removing a device from the smart home system...\n" << std::endl;
    smartHome.remove(&doorLockIntegrator);
    std::cout << std::endl;

    std::cout << "Checking child devices of the smart home system..." << std::endl;
    std::cout << "The 1st item in the smart home system is a " << smartHome.getChild(0)->getDeviceType() << std::endl;
    std::cout << "The 2st item in the smart home system is a " << smartHome.getChild(1)->getDeviceType() << std::endl;
    std::cout << std::endl;

    std::cout << smartHome.getDeviceType();

    std::cout << "\n======================================== Testing Observer with Adapter ========================================\n" << std::endl;

    lightIntegrator.update();
    doorLockIntegrator.update();
    thermostatIntegrator.update();
    std::cout << std::endl;

    LightSensor lightSensor = LightSensor();
    DoorSensor doorSensor = DoorSensor();
    ThermostatSensor thermostatSensor = ThermostatSensor();

    lightSensor.addDevice(&lightIntegrator);
    doorSensor.addDevice(&doorLockIntegrator);
    thermostatSensor.addDevice(&thermostatIntegrator);

    lightSensor.setMotionDetected(true);
    doorSensor.setInactivityDetected(true);
    thermostatSensor.setThresholdReached(true);

    lightIntegrator.setStatus(false);
    doorLockIntegrator.setStatus(false);
    thermostatIntegrator.setStatus(false);

    lightSensor.notifyDevices();
    std::cout << std::endl;
    doorSensor.notifyDevices();
    std::cout << std::endl;
    thermostatSensor.notifyDevices();
    std::cout << std::endl;
}