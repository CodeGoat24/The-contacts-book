#ifndef addressbooks
#define addressbooks
#define MAX 10000 //�������
#include<map>
#include"Person.h"
class Addressbooks
{
	Person personArray[MAX]; //ͨѶ¼�б������ϵ������
	int m_Size; //ͨѶ¼����Ա����
	map<string, bool> mp;//��¼�������Ƿ��ѳ�����ͨѶ¼�� 
	int flag;
public:
	Addressbooks(): m_Size(0), flag(0){};
	void showMenu(); //��ʾ�˵� 
	void getFile(); //�ӱ���txt�ж�ȡ��ϵ����Ϣ 
	void saveFile(); //����ϵ����Ϣ���浽���� 
	void addPerson();//�����ϵ�� 
	void showPerson();//��ʾ������ϵ�� 
	int isExist(string name); //�ж���ϵ���Ƿ����
	void deletePerson();//ɾ����ϵ��
	void findPerson();//������ϵ��
	void print(int ret) ;//��ӡ�±�Ϊret����ϵ����Ϣ
	void modifyPerson();//�޸���ϵ�� 
	void cleanPerson();//�����ϵ�� 
	void sortingPerson();//����ϵ������ 
};


#endif
