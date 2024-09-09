#include "Decorator.h"

Decorator::Decorator(FarmUnit* unit) : FarmUnit(unit) {
    farmUnit = unit;
}