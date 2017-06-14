#pragma once

class CResearcher
{
private:
	int nSalary;
	

public:
	CResearcher();
	CResearcher(CResearcher& _student);
	~CResearcher();


	int GetSalary();
	

	void SetSalary(int _nSalary);

};