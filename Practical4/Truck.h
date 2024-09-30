#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>
#include <string>

using namespace std;

/**
 * @class Truck
 * @brief Abstract base class representing a truck in the Observer design pattern.
 *
 * The Truck class serves as an abstract base class for various types of trucks in the Observer design pattern.
 * It defines the common interface for trucks that can observe and respond to changes in other objects (e.g., barns).
 * Derived classes must implement the `startEngine()` method to define specific behaviors for starting the truck's engine.
 *
 * @tparam T There’s no template method.
 *
 * @ingroup Observer Pattern
 *
 * @author Salome Kalaka
 * @date 09 September 2024
 *
 * @version 1.0
 *
 * @see Derived classes (e.g., DeliveryTruck), startEngine()
 * @todo Implement specific truck behaviors in derived classes.
 *
 * @warning Ensure proper implementation of the `startEngine()` method to reflect accurate truck functionality.
 *
 * @attention Derived classes must provide concrete implementations for all pure virtual functions.
 *
 * @note The Truck class is part of an observer system where trucks may observe changes in other objects, such as barns.
 */
class Truck
{
    public:
        /**
         * @brief Default constructor for the Truck class.
         * 
         * Initializes a Truck object. The specific initialization details depend on derived classes.
         */
        Truck();

        /**
         * @brief Copy constructor for the Truck class.
         * 
         * Creates a copy of another Truck object.
         * 
         * @param other A pointer to the Truck object to be copied.
         */
        Truck(const Truck* other);

        /**
         * @brief Default virtual destructor.
         */
        virtual ~Truck() = default;

        /**
         * @brief Pure virtual function to start the truck's engine.
         * 
         * This function must be implemented by derived classes to define how the truck's engine is started.
         */
        virtual void startEngine() = 0;
};

#endif
