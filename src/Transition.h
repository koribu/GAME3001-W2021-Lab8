#pragma once
#ifndef __TRANSITION__
#define __TRANSITION__

#include "Condition.h"
#include "State.h"


class Transition
{
public:
	Transition(Condition* condition = nullptr, State* target_state = nullptr);
	 ~Transition();

	//getter

	Condition* GetCondition() const;
	State* getTargetState() const;

	//setter
	void setCondition(Condition* condition);
	void setTargetState(State* state);


private:
	Condition* m_condition;
	State* m_targetState;

};

#endif /* defined (__MOVE_TO_LOS_ACTION__) */