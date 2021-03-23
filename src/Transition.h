#pragma once
#ifndef __TRANSITION__
#define __TRANSITION__
#include "Condition.h"
#include "State.h"


class Transition
{
public:
	Transition(Condition* condition, State* target_state);
	virtual ~Transition();

	//getter
	bool isTriggered()const;
	Condition* GetCondition() const;

	//setter
	void setTargetState(State* state);
	void setIsTriggered(bool state);
	void setCondition(Condition* condition);

private:
	Condition* m_condition;
	State* m_targetState;
	bool m_isTriggered;
};

#endif /* defined (__MOVE_TO_LOS_ACTION__) */