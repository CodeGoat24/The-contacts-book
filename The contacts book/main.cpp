#include <iostream>
#include "Addressbooks.h" 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Addressbooks abs;
	abs.getFile();
	int select = 0;
	while (true)
	{
		abs.showMenu();//展示菜单 
	
		cin >> select;
		
		switch (select)
		{
		case 1:  //添加联系人
			abs.addPerson();
			break;
		case 2:  //显示联系人
			abs.showPerson();
			break;
		case 3:  //删除联系人
			abs.deletePerson();
			break;
		case 4:  //查找联系人
			abs.findPerson();
			break;
		case 5:  //修改联系人
			abs.modifyPerson();
			break;
		case 6:  //清空联系人
			abs.cleanPerson();
			break;
		case 7: //整理通讯录
			abs.sortingPerson();
			break; 
		case 0:  //退出通讯录
			abs.saveFile();
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}

	system("pause");

	return 0;
}
