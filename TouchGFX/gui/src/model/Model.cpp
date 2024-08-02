#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "stm32f7xx_hal.h"

extern __IO uint16_t voltages[2];


Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	modelListener->UpdateGraph(voltages[0] * 3300/  4095);
	modelListener->UpdateGraph2(voltages[1] * 3300/  4095);

}
