#ifndef NODE_H
#define NODE_H
#include <vector>

class Node
{
    public:
        Node(double bias,double weights[]);
        virtual ~Node();

        double doThing(double values[]);
    private:
        double bias;
        std::vector<double> weights;
};

#endif // NODE_H
