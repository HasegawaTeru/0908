#include <iostream>

enum class EnemyAI
{
	Idle,
	Patrol,
	Chase,
	Attack,
	Search,
};

EnemyAI enemy_ai = EnemyAI::Idle;

EnemyAI DoIdle()
{
	std::cout << "EnemyAI::Idle" << std::endl;
	return EnemyAI::Patrol;
}

EnemyAI DoPatrol()
{
	std::cout << "EnemyAI::Patrol" << std::endl;
	return EnemyAI::Chase;
}

EnemyAI DoChase()
{
	std::cout << "EnemyAI::Chase" << std::endl;
	return EnemyAI::Attack;
}

EnemyAI DoAttack()
{
	std::cout << "EnemyAI::Attack" << std::endl;
	return EnemyAI::Search;
}

EnemyAI DoSearch()
{
	std::cout << "EnemyAI::Search" << std::endl;
	return EnemyAI::Idle;
}

EnemyAI MainLoop()
{
	switch (enemy_ai)
	{
	default: return EnemyAI::Idle;
	case EnemyAI::Idle: return DoIdle();
	case EnemyAI::Patrol: return DoPatrol();
	case EnemyAI::Chase: return DoChase();
	case EnemyAI::Attack: return DoAttack();
	case EnemyAI::Search: return DoSearch();
	}
}

int main()
{
	while (true)
	{
		auto nextState = MainLoop();
		if(enemy_ai != nextState)
		{
			enemy_ai = nextState;
		}
	}
}