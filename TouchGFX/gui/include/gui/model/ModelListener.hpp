#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>
#include <touchgfx/hal/Types.hpp>

class ModelListener
{
public:
    ModelListener() : model(0) {}
    
    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }

    virtual void UpdateGraph(uint16_t value){}
    virtual void UpdateGraph2(uint16_t value){}


protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
