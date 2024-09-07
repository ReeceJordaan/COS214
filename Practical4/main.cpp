#include "CropField.h"

int main() {
    CropField field1 = CropField("Corn", 15, 30);
    CropField field2 = CropField("Potato", 15, 30);
    CropField field3 = CropField("Tomato", 15, 30);
    CropField field4 = CropField("Sugarcane", 15, 30);
    CropField field5 = CropField(&field1);
    CropField field6 = CropField(&field2);
    CropField field7 = CropField(&field3);
    CropField field8 = CropField(&field4);
}