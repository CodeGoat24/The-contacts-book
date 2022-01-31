#ifndef addressbooks
#define addressbooks
#define MAX 10000 //最大人数
#include<map>
#include"Person.h"
class Addressbooks
{
	Person personArray[MAX]; //通讯录中保存的联系人数组
	int m_Size; //通讯录中人员个数
	map<string, bool> mp;//记录此名字是否已出现在通讯录中 
	int flag;
public:
	Addressbooks(): m_Size(0), flag(0){};
	void showMenu(); //显示菜单 
	void getFile(); //从本地txt中读取联系人信息 
	void saveFile(); //将联系人信息保存到本地 
	void addPerson();//添加联系人 
	void showPerson();//显示所有联系人 
	int isExist(string name); //判断联系人是否存在
	void deletePerson();//删除联系人
	void findPerson();//查找联系人
	void print(int ret) ;//打印下标为ret的联系人信息
	void modifyPerson();//修改联系人 
	void cleanPerson();//清空联系人 
	void sortingPerson();//给联系人排序 
};


#endif
