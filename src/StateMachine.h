#pragma once
#ifndef __STATE_MACHINE__  //FSM
#define __STATE_MACHINE__
#include "Condition.h"
#include "State.h"


class StateMachine
{
public:
	StateMachine();
	~StateMachine();

	//getter
	State* getCurrentState() const;

	//setter
	void setCurrentState(State* currentState);

	void Update();
private:
	State* m_currentState;
	
};

#endif 
