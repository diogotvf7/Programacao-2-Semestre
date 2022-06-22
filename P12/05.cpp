#include <iostream>
#include "Operation.h"
using namespace std;

class Sum : public Operation {

    public:
        Sum(int op1, int op2) : Operation(op1, op2) {}
        virtual int operation() const {return get_op1() + get_op2();}
};

class Power : public Operation {

    public:
        Power(int op1, int op2) : Operation(op1, op2) {}
        virtual int operation() const {

            int total = 1;
            for (int i = get_op2(); i > 0; i--) {

                total *= get_op1();
            }
            return total;
        }
};