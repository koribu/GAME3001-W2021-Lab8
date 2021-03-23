#include "Transition.h"


Transition::Transition(Condition* condition, State* target_state)
{
	setTargetState(target_state);
	setCondition(condition);
}

Transition::~Transition()
= default;

void Transition::setTargetState(State* state)
{
	m_targetState = state;
}

bool Transition::isTriggered() const
{
	return m_isTriggered;
}

Condition* Transition::GetCondition() const
{
	return m_condition;
}

State* Transition::getTargetState() const
{
	return m_targetState;
}

void Transition::setIsTriggered(bool state)
{
	m_isTriggered = state;
}

void Transition::setCondition(Condition* condition)
{
	m_condition = condition;
}
