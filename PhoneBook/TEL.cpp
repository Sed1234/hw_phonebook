#include "TEL.h"


	TEL::TEL(int m, int h, int w)
	{
		mob = m;
		home = h;
		work = w;
	}

	int TEL::GetMob() const
	{
		return mob;
	}

	void TEL::SetMob(int mob)
	{
		this->mob = mob;
	}
	int TEL::GetHome() const
	{
		return home;
	}

	void TEL::SetHome(int home)
	{
		this->home = home;
	}
	int TEL::GetWork() const
	{
		return work;
	}

	void TEL::SetWork(int work)
	{
		this->work = work;
	}

	TEL::TEL()
	{
	}
