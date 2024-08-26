#ifndef UNITCOMPONENT_h
#define UNITCOMPONENT_h

class UnitComponent
{
	public:
		virtual void move() = 0;
        virtual void fight() = 0;
		virtual ~UnitComponent() = default;
	
	private: 
		int health;
		int defence;
		int attack;
};


#endif
