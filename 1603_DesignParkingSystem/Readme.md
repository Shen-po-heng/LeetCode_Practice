# 1603. Design Parking System

Question description:https://leetcode.com/problems/design-parking-system/description/?envType=study-plan-v2&envId=programming-skills

My 1st try (13.10.2024) was not okay.

However, I think the recommended solution is pretty, but maybe should do some change;
``` cpp
class ParkingSystem {
private:
    vector<int> empty;
public:
    
    ParkingSystem(int big, int medium, int small) {
        empty = vector<int>{big, medium, small};
    }

    bool addCar(int carType) {
        if (empty[carType - 1] > 0) {
            empty[carType - 1]--;
            return true;
        }
        return false;
    }
};
```

In C++, using this-> is generally optional within a class unless there's a name conflict or ambiguity. Here are some details:

1. Without this->: If there's no ambiguity, you can simply refer to member variables and methods by their name, as C++ assumes you are referring to the member variables of the class.

2. With this->: The this pointer explicitly refers to the current instance of the class. Using this-> can clarify that you're accessing the member variables of the current object, though it's often redundant unless there is a need to distinguish between local variables and member variables (e.g., if a parameter has the same name as a member variable).