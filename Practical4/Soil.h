#ifndef SOIL_H
#define SOIL_H

#include <string>
#include <iostream>

using namespace std;

/**
 * @class Soil
 * @brief Abstract base class representing soil in the State design pattern.
 *
 * The Soil class serves as an abstract base class for different soil states in the State design pattern. 
 * It defines the common interface for various concrete soil states and includes functionality for harvesting crops and handling rain.
 * Specific soil states like DrySoil, FloodedSoil, and FruitfulSoil inherit from this class and implement the specific behaviors.
 *
 * @tparam T There’s no template method.
 *
 * @ingroup State Pattern
 *
 * @author Salome Kalaka
 * @date 09 September 2024
 *
 * @version 1.0
 *
 * @see Derived classes (DrySoil, FloodedSoil, FruitfulSoil), harvestCrops(), rain(), getName(), setName()
 * @todo Implement specific soil state behaviors in derived classes.
 *
 * @warning Ensure proper state transitions to avoid invalid soil conditions.
 *
 * @attention Derived classes must implement the pure virtual functions to define specific soil behaviors.
 *
 * @note The Soil class is part of a state machine that manages soil conditions in a farm environment.
 */
class Soil
{
    public:
        /**
         * @brief Constructor for the Soil class.
         * 
         * Initializes the Soil object with a name representing the type of soil.
         * 
         * @param name The name of the soil type.
         */
        Soil(string name);

        /**
         * @brief Copy constructor for the Soil class.
         * 
         * Creates a copy of another Soil object.
         * 
         * @param other A pointer to the Soil object to be copied.
         */
        Soil(const Soil* other);

        /**
         * @brief Default virtual destructor.
         */
        virtual ~Soil() = default;

        /**
         * @brief Pure virtual function to handle crop harvesting.
         * 
         * This function must be implemented by derived classes to define how crops are harvested based on the soil condition.
         */
        virtual void harvestCrops() = 0;

        /**
         * @brief Pure virtual function to handle rain.
         * 
         * This function must be implemented by derived classes to define how the soil state reacts to rain.
         */
        virtual void rain() = 0;

        /**
         * @brief Gets the name of the soil type.
         * 
         * @return The name of the soil type.
         */
        string getName();

        /**
         * @brief Sets the name of the soil type.
         * 
         * @param name The new name of the soil type.
         */
        void setName(string name);

    private:
        string name; ///< The name representing the type of soil.
};

#endif
