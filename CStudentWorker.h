#pragma once

class CStudentWorker
{
private:

	int nSalary;

public:
	CStudentWorker();
	CStudentWorker(CStudentWorker& _student);
	~CStudentWorker();

	int GetSalary();

	void SetSalary(int _pSalary);

};