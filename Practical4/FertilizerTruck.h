#ifndef FERTILIZERTRUCK_H
#define FERTILIZERTRUCK_H

#include "Truck.h"
#include "Soil.h"
#include <iostream>

class CropField;

/**
 * @class FertilizerTruck
 * @brief A concrete observer class for trucks that deliver fertilizer in the Observer design pattern.
 *
 * FertilizerTruck is a concrete implementation of the Truck class, designed to deliver fertilizer based on the state of a CropField.
 * It observes changes in the CropField and reacts accordingly. The FertilizerTruck also maintains a reference to the current soil state, 
 * which may affect its operations.
 *
 * @tparam T There’s no template method.
 *
 * @ingroup Observer Pattern
 *
 * @implements This class is a Concrete Observer and inherits from Truck.
 *
 * @author Salome Kalaka
 * @date 09 September 2024
 *
 * @version 1.0
 *
 * @see Truck class, CropField class, Soil class, startEngine()
 * @todo Implement specific logic for reacting to changes in the CropField and soil state.
 *
 * @warning Ensure the correct handling of fertilizer delivery based on soil conditions and crop field status.
 *
 * @attention Maintain synchronization between the truck, crop field, and soil state to ensure accurate operations.
 *
 * @note FertilizerTruck is part of an observer system where it reacts to changes in the CropField and adjusts its behavior accordingly.
 */
class FertilizerTruck : public Truck
{
    public:
        /**
         * @brief Constructor for the FertilizerTruck class.
         * 
         * Initializes a FertilizerTruck object with references to the CropField and Soil state.
         * 
         * @param subject A pointer to the CropField that the truck will observe.
         * @param soilState A pointer to the current soil state that affects the truck's operations.
         */
        FertilizerTruck(CropField* subject, Soil* soilState);

        /**
         * @brief Copy constructor for the FertilizerTruck class.
         * 
         * Creates a copy of another FertilizerTruck object.
         * 
         * @param other A pointer to the FertilizerTruck object to be copied.
         */
        FertilizerTruck(const FertilizerTruck* other);

        /**
         * @brief Default virtual destructor.
         */
        ~FertilizerTruck() = default;

        /**
         * @brief Starts the truck's engine.
         * 
         * This function defines how the truck's engine is started. It may involve preparing the truck for fertilizer delivery.
         */
        void startEngine();

    private:
        CropField* subject; ///< A pointer to the CropField being observed.
        Soil* soilState;    ///< A pointer to the current soil state affecting the truck's operations.
};

#endif
