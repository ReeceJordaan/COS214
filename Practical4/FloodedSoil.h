#ifndef FLOODEDSOIL_H
#define FLOODEDSOIL_H

#include "Soil.h"

/**
 * @class FloodedSoil
 * @brief A concrete state representing flooded soil in the State design pattern.
 *
 * FloodedSoil is one of the possible states of soil within the State design pattern. This state indicates that the soil is flooded, 
 * and it defines behaviors such as harvesting crops and reacting to further rain. When rain occurs, the state of the soil may change.
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
 * @todo Implement transition to DrySoil or another state when conditions change.
 *
 * @warning Flooded soil may damage crops and impede harvesting.
 *
 * @attention Ensure proper handling of transitions between soil states to reflect accurate soil conditions.
 *
 * @note FloodedSoil is part of a larger state machine managing soil conditions in a farm environment.
 */
class FloodedSoil : public Soil
{
    public:
        /**
         * @brief Constructor for the FloodedSoil class.
         * 
         * This constructor initializes the FloodedSoil state, indicating that the soil is in a flooded condition.
         */
        FloodedSoil();

        /**
         * @brief Copy constructor for the FloodedSoil class.
         * 
         * This constructor creates a copy of another FloodedSoil object.
         * 
         * @param other A pointer to the FloodedSoil object to be copied.
         */
        FloodedSoil(const FloodedSoil* other);

        /**
         * @brief Default virtual destructor.
         */
        ~FloodedSoil() = default;

        /**
         * @brief Handles crop harvesting in the flooded soil state.
         * 
         * This method defines how crops are harvested when the soil is flooded, which may lead to damage or difficulties in harvesting.
         */
        void harvestCrops();

        /**
         * @brief Simulates additional rain falling on the flooded soil.
         * 
         * This method triggers further rain in the flooded soil state, potentially transitioning the soil to another state.
         */
        void rain();
};

#endif
