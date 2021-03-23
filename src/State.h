#pragma once
#ifndef __STATE__
#define __STATE__



class State
{
public:
	State();
	virtual ~State(Condition* condition, State* target_state);

private:

};

#endif

