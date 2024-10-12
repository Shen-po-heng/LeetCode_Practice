class ParkingSystem {
private:
    int num_big{0};
    int num_medium{0};
    int num_small{0};

public:
    ParkingSystem(int big, int medium, int small) {
        num_big=big;
        num_medium=medium;
        num_small=small;
    }
    
    bool addCar(int carType) {
        if(carType==1 && num_big >0){
            num_big--;
            return true;
        }else if(carType==2 && num_medium >0){
            num_medium--;
            return true;
        }else if(carType==3 && num_small >0){
            num_small--;
            return true;
        }
        return false;
    }
};
