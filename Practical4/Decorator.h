#ifndef DECORATOR_H
#define DECORATOR_H

#include "FarmUnit.h"
#include<iostream>

using namespace std;

/**
 * @class Decorator
 * @brief An abstract decorator class that adds additional functionality to FarmUnit objects.
 *
 * The Decorator class is responsible for dynamically adding new functionalities, such as increasing production, harvesting, and calculating storage capacity. 
 * This class is intended to be subclassed to provide specific implementations for different types of decorators.
 *
 * @tparam T There’s no template method.
 *
 * @ingroup Pattern Wizards
 *
 * @implements This class is an abstract decorator and inherits from FarmUnit.
 *
 * @author Salome Kalaka
 * @date 09 September 2024
 *
 * @version 1.0
 *
 * @see FarmUnit class, harvest(), increaseProduction(), and getLeftoverCapacity()
 * @todo Implement specific decorators that inherit from this class.
 *
 * @warning No warning.
 *
 * @attention This class should not be instantiated directly; it serves as a base class for concrete decorators.
 *
 * @note The virtual functions must be implemented in subclasses.
 */
class Decorator : public FarmUnit
{
    public:
        /**
         * @brief Constructor for the Decorator class.
         * 
         * This constructor takes a FarmUnit pointer and decorates it with additional functionalities.
         * 
         * @param unit A pointer to the FarmUnit that will be decorated.
         */
        Decorator(FarmUnit* unit);

        /**
         * @brief Default virtual destructor.
         */
        virtual ~Decorator() = default;

        /**
         * @brief Pure virtual method for harvesting crops.
         * 
         * This method should be implemented by subclasses to handle the harvesting process.
         */
        virtual void harvest() = 0;

        /**
         * @brief Pure virtual method for increasing production.
         * 
         * This method should be implemented by subclasses to handle the increase in production capacity.
         */
        virtual void increaseProduction() = 0;

        /**
         * @brief Pure virtual method to calculate the leftover storage capacity.
         * 
         * This method should be implemented by subclasses to calculate the remaining storage capacity of the farm unit.
         * 
         * @return The leftover storage capacity of the farm unit.
         */
        virtual int getLeftoverCapacity() = 0;

        /**
         * @brief Prints the details of the decorated farm unit.
         * 
         * This method prints information related to the current farm unit and its decorator.
         */
        void print();

    protected:
        /**
         * @brief A pointer to the FarmUnit being decorated.
         * 
         * This pointer is used to apply additional functionalities to the base farm unit.
         */
        FarmUnit* farmUnit;
};

#endif
