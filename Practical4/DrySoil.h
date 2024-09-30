#ifndef DRYSOIL_H
#define DRYSOIL_H

#include "Soil.h"

/**
 * @class DrySoil
 * @brief A concrete state representing dry soil in the State design pattern.
 *
 * DrySoil is one of the possible states of soil within the State design pattern. This state indicates that the soil is dry, 
 * and it defines behaviors such as harvesting crops and reacting to rain. When rain occurs, the state of the soil may change.
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
 * @todo Implement transition to FruitfulSoil or another state when rain occurs.
 *
 * @warning Dry soil may result in lower crop yield during harvest.
 *
 * @attention Transitions between soil states must be handled properly to reflect real-world soil conditions.
 *
 * @note DrySoil is part of a larger state machine managing soil conditions in a farm environment.
 */
class DrySoil : public Soil
{
    public:
        /**
         * @brief Constructor for the DrySoil class.
         * 
         * This constructor initializes the DrySoil state, indicating that the soil is in a dry condition.
         */
        DrySoil();

        /**
         * @brief Copy constructor for the DrySoil class.
         * 
         * This constructor creates a copy of another DrySoil object.
         * 
         * @param other A pointer to the DrySoil object to be copied.
         */
        DrySoil(const DrySoil* other);

        /**
         * @brief Default virtual destructor.
         */
        ~DrySoil() = default;

        /**
         * @brief Handles crop harvesting in the dry soil state.
         * 
         * This method defines how crops are harvested when the soil is dry, which might lead to reduced yields.
         */
        void harvestCrops();

        /**
         * @brief Simulates rain falling on the dry soil.
         * 
         * This method triggers rain in the dry soil state, potentially transitioning the soil to a more fertile state.
         */
        void rain();
};

#endif
