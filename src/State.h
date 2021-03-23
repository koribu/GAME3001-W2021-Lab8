#pragma once
#ifndef __STATE__
#define __STATE__
#include <vector>


#include "Action.h"
#include "Transition.h"


class State
{
public:
	friend class Transition;
	
	State();
   ~State();

	//getter
   std::vector<Transition*> getTransition();
   Action* getAction();
	
	//setter
   void AddTransition(Transition* transition);
   void SetAction(Action* action);

private:
	std::vector<Transition*> m_transition;
	Action* m_action;
};

#endif

