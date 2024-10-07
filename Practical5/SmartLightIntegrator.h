#ifndef SMARTLIGHTINTEGRATOR_H
#define SMARTLIGHTINTEGRATOR_H

#include <string>
#include <iostream>
#include "Light.h"
#include "LegacyLight.h"

using namespace std;

/**
 * @class SmartLightIntegrator
 * @brief Adapter class that integrates a LegacyLight into the SmartDevice framework.
 *
 * The SmartLightIntegrator class serves as an adapter, allowing the use of a LegacyLight
 * as a SmartDevice. It implements the Light interface and delegates the functionality
 * to the adaptee, bridging the gap between the new system and the legacy system.
 *
 * @ingroup Pattern Wizards
 *
 * @implements This class is an adapter that extends the Light interface.
 *
 * @author Salome Kalaka
 * @date 07 October 2024
 *
 * @version 1.0
 *
 * @see Light class, performAction(), getStatus(), setStatus(), getDeviceType(), update()
 * @todo Consider adding error handling for legacy light interactions.
 *
 * @warning Ensure that the adaptee pointer is valid before using it to avoid dereferencing null.
 *
 * @attention This class allows seamless integration of legacy systems into the current smart home architecture.
 */
class SmartLightIntegrator : public Light
{
    public:
        /**
         * @brief Constructor for the SmartLightIntegrator class.
         * 
         * Initializes a new instance of the SmartLightIntegrator with the specified legacy light.
         * 
         * @param legacyLight A pointer to the LegacyLight instance to be adapted.
         */
        SmartLightIntegrator(LegacyLight* legacyLight);

        /**
         * @brief Destructor for the SmartLightIntegrator class.
         * 
         * Cleans up resources associated with the SmartLightIntegrator instance and its adaptee.
         */
        ~SmartLightIntegrator();

        /**
         * @brief Switches the light on or off by performing the action on the adaptee.
         * 
         * This method implements the performAction() method defined in the Light interface.
         */
        void performAction();

        /**
         * @brief Retrieves the status of the legacy light.
         * 
         * This method implements the getStatus() method defined in the Light interface.
         * 
         * @return The status of the legacy light (true for on, false for off).
         */
        bool getStatus();

        /**
         * @brief Sets the status of the legacy light.
         * 
         * This method implements the setStatus() method defined in the Light interface.
         * 
         * @param status The desired status to set (true for on, false for off).
         */
        void setStatus(bool status);

        /**
         * @brief Returns the device type as a string.
         * 
         * This method implements the getDeviceType() method defined in the Light interface.
         * 
         * @return A string representing the device type ("Smart Light").
         */
        string getDeviceType();

        /**
         * @brief Updates the state of the legacy light through the adaptee.
         * 
         * This method implements the update() method defined in the Light interface.
         */
        void update();

    private:
        /**
         * @brief Pointer to the LegacyLight instance being adapted.
         */
        LegacyLight* adaptee;
};

#endif
