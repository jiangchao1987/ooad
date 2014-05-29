#ifndef STRATEGY_H_
#define STRATEGY_H_

class Strategy
{
public:
	~Strategy();
	virtual void AlgrithmInterface() = 0;
protected:
	Strategy();
};

class ConcreteStrategyA : public Strategy
{
public:
	ConcreteStrategyA();
	~ConcreteStrategyA();
	virtual void AlgrithmInterface();
protected:
private:
};

class ConcreteStrategyB : public Strategy
{
public:
	ConcreteStrategyB();
	~ConcreteStrategyB();
	virtual void AlgrithmInterface();
protected:
private:
};

class Context
{
public:
	Context(Strategy*);
	~Context();
	void DoAction();
private:
	Strategy* _strategy;
};

#endif