//change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body

template <class T>
class Calculator {
private:
    int num1, num2;

public:
    Calculator(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    int add() { return num1+num2; }
    int subtract() { return num1-num2; }
    int multiply() { return num1*num2; }
    int divide() { return num1/num2; }
};















