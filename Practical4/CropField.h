//! @file CropField.h
//! @brief Declaration of the CropField class, representing a field for growing crops, managing barns, and soil state.

#ifndef CROPFIELD_H
#define CROPFIELD_H

#include <string>
#include <vector>
#include <iomanip>
#include "Soil.h"
#include "FarmUnit.h"

class Barn;

//! @class CropField
//! @brief Represents a crop field, inheriting from FarmUnit, with crop type, barns, and soil state.
class CropField : public FarmUnit {
    private:
        //! The type of crop grown in the field.
        std::string cropType;

        //! A collection of barns associated with the crop field.
        std::vector<Barn*> barns;

        //! The soil state of the crop field.
        Soil* soilState;

    public:
        //! Constructor for CropField.
        //! @param cropType The type of crop grown.
        //! @param currentCapacity The current capacity of the crop field.
        //! @param totalCapacity The total capacity of the crop field.
        CropField(std::string cropType, int currentCapacity, int totalCapacity);

        //! Copy constructor for CropField.
        //! @param cropField Pointer to another CropField object to copy from.
        CropField(CropField* cropField);

        //! Destructor for CropField.
        ~CropField();

        //! Gets the type of crop grown in the field.
        //! @return The crop type as a string.
        std::string getCropType();

        //! Gets the soil state of the crop field.
        //! @return Pointer to the Soil object representing the soil state.
        Soil* getSoilState() const;

        //! Sets the soil state of the crop field.
        //! @param soilState Pointer to a Soil object to set the soil state.
        void setSoilState(Soil* soilState);

        //! Gets the name of the soil state.
        //! @return The name of the soil state as a string.
        std::string getSoilStateName() const;

        //! Builds a new barn with the specified total capacity.
        //! @param totalCapacity The total capacity of the new barn.
        void buildBarn(int totalCapacity);

        //! Buys a new truck for the crop field.
        void buyTruck();

        //! Sells a truck from the crop field.
        void sellTruck();

        //! Calls a truck for delivery or other tasks.
        void callTruck();

        //! Prints the details of the crop field, including crop type, barns, and soil state.
        void print();
};

#endif // CROPFIELD_H