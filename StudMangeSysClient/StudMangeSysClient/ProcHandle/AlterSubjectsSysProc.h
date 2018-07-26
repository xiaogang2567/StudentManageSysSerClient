#ifndef __ALTERSUBJECTSSYSPROC_H__
#define __ALTERSUBJECTSSYSPROC_H__

#include "BaseProc.h"

class AlterSubjectsSysProc : public BaseProc
{
public:
	AlterSubjectsSysProc(ProcDef nProcDef);
	~AlterSubjectsSysProc();

	virtual bool initMapChoose();

	virtual void EndProc();

	virtual void StartRecv(void* vpData, unsigned int DataLen, /*int iMianId,*/ int iAssistId);
	virtual void EndRecv();

	virtual void SwitchToOper(OperPermission CurOper);

	//��ҳѡ����� ����ǰ������
	void GetSubjectsAfterAddSubjectChooseHandle();
	void GetSubjectsAfterDeleteSubjectChooseHandle();

	//ѡ���������
	void AddSubjectChooseHandle(char* pCanAlterSubjects);
	void DeleteSubjectChooseHandle(char* pCanAlterSubjects);

	//���ؽ������
	bool GetSubjectsAfterAlterSubjectRecvHandle(void* vpData, unsigned int DataLen);
	bool AlterSubjectRecvHandle(void* vpData, unsigned int DataLen);

protected:
	int ShowSubjects(map<int, string> mIStr);
};

#endif