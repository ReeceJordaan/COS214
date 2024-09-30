#ifndef FRUITFULSOIL_H
#define FRUITFULSOIL_H

#include "Soil.h"

/**
 * @class FruitfulSoil
 * @brief A concrete state representing fruitful soil in the State design pattern.
 *
 * FruitfulSoil is one of the possible states of soil within the State design pattern. This state indicates that the soil is in an optimal condition for crop growth, 
 * and it defines behaviors such as harvesting crops and reacting to rain. When rain occurs, the soil state may transition to another condition if overwatered.
 *
 * @tparam T There’s no template method.
 *
 * @ingroup State Pattern
 *
 * @implements This class is a concrete state and inherits from Soil.
 *
 * @author Salome Kalaka
 * @date 09 September 2024
 *
 * @version 1.0
 *
 * @see Soil class, harvestCrops(), rain()
 * @todo Implement transition to FloodedSoil or another state when excess rain occurs.
 *
 * @warning Overwatering may transition the soil to a less desirable state.
 *
 * @attention Ensure proper handling of state transitions to reflect accurate soil conditions and prevent crop damage.
 *
 * @note FruitfulSoil is part of a state machine managing soil conditions to optimize crop growth and harvest.
 */
class FruitfulSoil : public Soil
{
    public:
        /**
         * @brief Constructor for the FruitfulSoil class.
         * 
         * This constructor initializes the FruitfulSoil state, indicating that the soil is in an optimal condition for crop growth.
         */
        FruitfulSoil();

        /**
         * @brief Copy constructor for the FruitfulSoil class.
         * 
         * This constructor creates a copy of another FruitfulSoil object.
         * 
         * @param other A pointer to the FruitfulSoil object to be copied.
         */
        FruitfulSoil(const FruitfulSoil* other);

        /**
         * @brief Default virtual destructor.
         */
        ~FruitfulSoil() = default;

        /**
         * @brief Handles crop harvesting in the fruitful soil state.
         * 
         * This method defines how crops are harvested when the soil is in an optimal condition, typically leading to high yields.
         */
        void harvestCrops();

        /**
         * @brief Simulates rain falling on the fruitful soil.
         * 
         * This method triggers rain in the fruitful soil state, potentially transitioning the soil to a different state if excessive.
         */
        void rain();
};

#endif
