#include "FloatCondition.h"

FloatCondition::FloatCondition(float min_value, float max_value)
{
	m_minValue = min_value;
	m_maxValue = max_value;
}

FloatCondition::~FloatCondition()
= default;

void FloatCondition::setTextValue(float value)
{
	m_testValue = value;
}

bool FloatCondition::Test()
{
	return (m_minValue <= m_maxValue) && (m_testValue <= m_maxValue);
}
