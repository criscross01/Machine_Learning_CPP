#include "node.h"

Node::Node(double bias, double weights[])
{
     for (int i = 0; i < sizeof(weights)/sizeof(weights[0]);i++){
        this->weights.push_back(weights[i]);
     }

     this->bias = bias;
}

Node::~Node()
{
    //dtor
}

double Node::doThing(double values[]){
    double sum;
    for (int i = 0; i < sizeof(values)/sizeof(values[0]);i++){
        sum += values[i]*weights[i];
    }

    return sum - bias;
}
