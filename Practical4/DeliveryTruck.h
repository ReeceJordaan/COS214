#ifndef DELIVERYTRUCK_H
#define DELIVERYTRUCK_H

#include "Truck.h"
#include <iostream>

class Barn;

/**
 * @class DeliveryTruck
 * @brief A concrete observer class that reacts to changes in the Barn subject.
 *
 * As part of the Observer design pattern, the DeliveryTruck class observes changes in a Barn object and acts accordingly. 
 * This truck is responsible for delivering or collecting goods when notified by the Barn.
 *
 * @tparam T There’s no template method.
 *
 * @ingroup Observer Pattern
 *
 * @implements This class is a concrete observer and inherits from Truck.
 *
 * @author Salome Kalaka
 * @date 09 September 2024
 *
 * @version 1.0
 *
 * @see Truck class, Barn class
 * @todo Implement the observer's notification mechanism to respond to state changes in Barn.
 *
 * @warning No warning.
 *
 * @attention This truck can only observe a single Barn instance at a time.
 *
 * @note The constructor initializes the subject it is observing (Barn).
 */
class DeliveryTruck : public Truck
{
    public:
        /**
         * @brief Constructor for the DeliveryTruck class.
         * 
         * This constructor sets the Barn that the DeliveryTruck will observe and respond to.
         * 
         * @param subject A pointer to the Barn that the DeliveryTruck will observe.
         */
        DeliveryTruck(Barn* subject);

        /**
         * @brief Copy constructor for the DeliveryTruck class.
         * 
         * This constructor creates a copy of another DeliveryTruck object.
         * 
         * @param other A pointer to the DeliveryTruck object to be copied.
         */
        DeliveryTruck(const DeliveryTruck* other);

        /**
         * @brief Default virtual destructor.
         */
        ~DeliveryTruck() = default;

        /**
         * @brief Starts the engine of the delivery truck.
         * 
         * This function handles the process of starting the engine when the truck is ready for a delivery task.
         */
        void startEngine();

    private:
        /**
         * @brief The Barn subject being observed by this DeliveryTruck.
         * 
         * This pointer holds the reference to the Barn object that the DeliveryTruck will observe and respond to.
         */
        Barn* subject;
};

#endif
