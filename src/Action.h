#pragma once
#ifndef __ACTION__
#define __ACTION__

//Action interface
class Action
{
public:
	Action()= default;
	virtual ~Action();

	virtual void Execute() = 0;
	
};

#endif
