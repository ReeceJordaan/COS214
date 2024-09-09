#ifndef FERTILIZERDECORATOR_H
#define FERTILIZERDECORATOR_H

#include "Decorator.h"
#include<iostream>

/**
 * @class FertilizerDecorator
 * @brief A concrete decorator class that adds fertilizer-related functionality to a FarmUnit.
 *
 * The FertilizerDecorator class enhances the functionality of a FarmUnit by adding features related to fertilizers,
 * such as improving crop yield, harvesting crops, and calculating the remaining storage capacity. 
 * It follows the Decorator design pattern to dynamically add these functionalities.
 *
 * @tparam T There’s no template method.
 *
 * @ingroup Decorator Pattern
 *
 * @implements This class is a concrete decorator and inherits from Decorator.
 *
 * @author Salome Kalaka
 * @date 09 September 2024
 *
 * @version 1.0
 *
 * @see Decorator class, harvest(), increaseProduction(), and getLeftoverCapacity()
 * @todo Implement specific behavior for fertilizer application and its effects.
 *
 * @warning No warning.
 *
 * @attention Ensure that fertilizer application does not exceed the farm unit's storage capacity.
 *
 * @note The FertilizerDecorator adds fertilizer-related functionalities to an existing farm unit.
 */
class FertilizerDecorator : public Decorator
{
    public:
        /**
         * @brief Constructor for the FertilizerDecorator class.
         * 
         * This constructor initializes the FertilizerDecorator with a FarmUnit to be decorated with fertilizer functionalities.
         * 
         * @param unit A pointer to the FarmUnit that will be decorated with fertilizer features.
         */
        FertilizerDecorator(FarmUnit* unit);

        /**
         * @brief Default virtual destructor.
         */
        ~FertilizerDecorator() = default;

        /**
         * @brief Enhances the harvest operation by applying fertilizer.
         * 
         * This method handles the harvesting process with the added benefits of fertilizer, potentially increasing crop yield.
         */
        void harvest();

        /**
         * @brief Increases production capacity by applying fertilizer.
         * 
         * This method improves the total production capacity of the farm unit by using fertilizers, allowing for more efficient crop growth.
         */
        void increaseProduction();

        /**
         * @brief Calculates the remaining storage capacity after applying fertilizers.
         * 
         * This method returns the leftover capacity of the farm unit after considering the increased production capacity due to fertilizers.
         * 
         * @return The remaining storage capacity of the farm unit.
         */
        int getLeftoverCapacity();

        /**
         * @brief Prints the details of the FertilizerDecorator and the associated farm unit.
         * 
         * This method outputs information about the fertilizer-related enhancements made to the farm unit.
         */
        void print();
};

#endif
