#pragma once
#ifndef __TRANSITION__
#define __TRANSITION__
#include "Condition.h"
#include "State.h"


class Transition
{
public:
	Transition(Condition* condition = nullptr, State* target_state);
	virtual ~Transition();

	//getter
	bool isTriggered()const;
	Condition* GetCondition() const;

	//setter
	void setCondition(Condition* condition);
	void setTargetState(State* state);
	void setIsTriggered(bool state);

private:
	Condition* m_condition;
	State* m_targetState;
	bool m_isTriggered;
};

#endif /* defined (__MOVE_TO_LOS_ACTION__) */