#ifndef BARNDECORATOR_H
#define BARNDECORATOR_H

#include "Decorator.h"
#include<iostream>
/**
 * @class BarnDecorator
 * @brief A decorator class that adds barn-related functionality to a FarmUnit.
 *
 * This class enhances the functionality of a farm unit by adding features related to barns, such as 
 * harvesting crops, increasing production, and calculating leftover capacity.
 *
 * @tparam T There’s no template method.
 *
 * @ingroup Pattern Wizards
 *
 * @implements This class is Concrete Decorator and it inherits from Decorator.
 *
 * @author Salome Kalaka
 * @date 09 September 2024
 *
 * @version 1.0
 *
 * @see Decorator class, harvest(), increaseProduction(), and getLeftoverCapacity()
 * @todo
 *
 * @warning No warning.
 *
 * @attention Crops harvested should not exceed the total capacity.
 *
 * @note There’s nothing to note. The function is pretty straightforward and understandable.
 */


class BarnDecorator : public Decorator
{
	public:
		BarnDecorator(FarmUnit* unit);
		~BarnDecorator() = default;
			/**
			 * @brief Harvests crops from the farm unit. 
			 * 
			 * This function handles the harvesting process of the crops in the decorated farm unit.
			 * 
			 * @see getCurrentCapacity(), setCurrentCapacity(int currentCapacity)
			 */
			void harvest();
			/**
			 * @brief Increases the production capacity of the farm unit.
			 * 
			 * This function increases the total production capacity of the farm unit by 40%, allowing the farm to produce and store more crops.
			 * 
			 * @see getTotalCapacity(), setTotalCapacity(int totalCapacity)
			 */
	        void increaseProduction();
			/**
			 * @brief Calculates the remaining storage capacity of the farm unit.
			 * 
			 * This function returns the leftover capacity by subtracting the current crop storage from the total capacity.
			 * 
			 * @return The remaining storage capacity in the farm unit.
			 * 
			 * @see getCurrentCapacity(), getTotalCapacity()
			 */
	        int getLeftoverCapacity();

		void print();
};

#endif
