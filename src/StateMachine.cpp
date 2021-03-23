#include  "StateMachine.h"

#include "Transition.h"

StateMachine::StateMachine()
= default;

StateMachine::~StateMachine()
= default;

State* StateMachine::getCurrentState() const
{
	return m_currentState;
}

void StateMachine::setCurrentState(State* currentState)
{
	m_currentState = currentState;
}


void StateMachine::Update()
{
	Transition* triggeredTransition = nullptr;

	for (auto transition : getCurrentState()->getTransition())
	{
		if(transition->GetCondition()->Test())
		{
			triggeredTransition = transition;
			break;
		}
	}

	if(triggeredTransition!= nullptr)
	{
		m_currentState = triggeredTransition->getTargetState();
	}

	m_currentState->getAction()->Execute();
	
}
