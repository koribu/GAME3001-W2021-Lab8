#pragma once
#ifndef __FLOAT_CONDITION__
#define __FLOAT_CONDITION__

#include "Condition.h"

class FloatCondition : public Condition
{
public:
	FloatCondition(float min_value, float max_value);
	~FloatCondition();

	void setTextValue(float value);

	bool Test() override;

private:
	float m_minValue;
	float m_maxValue;
	float m_testValue;
	
};

#endif
