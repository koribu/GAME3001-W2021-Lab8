#include "State.h"

State::State()
= default;

State::~State()
= default;

std::vector<Transition*> State::getTransition()
{
	return m_transition;
}

Action* State::getAction()
{
	return m_action;
}

void State::AddTransition(Transition* transition)
{
	m_transition.push_back(transition);
}

void State::SetAction(Action* action)
{
	m_action = action;
}
