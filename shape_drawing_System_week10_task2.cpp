#include <iostream>


class shape {
public:
    
    virtual void draw() {
        std::cout << "Drawing a generic shape" << std::endl;
    }
    
    
    virtual ~shape() {} 
};


class Circle : public shape {
public:
    
    void draw() override {
        std::cout << "Drawing Circle" << std::endl;
    }
};

class Rectangle : public shape {
public:
    void draw() override {
        std::cout << "Drawing Rectangle" << std::endl;
    }
};

class Triangle : public shape {
public:
    void draw() override {
        std::cout << "Drawing Triangle" << std::endl;
    }
};


int main() {
    
    Circle circleObj;
    Rectangle rectObj;
    Triangle triObj;

    
    shape* shapePtr = nullptr;

    std::cout << "--- Demonstrating Run-Time Polymorphism ---" << std::endl;

    
    shapePtr = &circleObj;
    shapePtr->draw(); 

    
    shapePtr = &rectObj;
    shapePtr->draw(); 

    
    shapePtr = &triObj;
    shapePtr->draw(); 

    return 0;
}