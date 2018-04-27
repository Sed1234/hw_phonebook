#pragma once
class TEL
{
	unsigned int mob;
	unsigned int home;
	unsigned int work;
public:
	TEL(int , int , int);
	int GetMob() const;
	void SetMob(int);
	int GetHome() const;
	void SetHome(int);
	int GetWork() const;
	void SetWork(int);
	TEL();
};

