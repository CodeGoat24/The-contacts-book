#include <iostream>
#include "Addressbooks.h" 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Addressbooks abs;
	abs.getFile();
	int select = 0;
	while (true)
	{
		abs.showMenu();//չʾ�˵� 
	
		cin >> select;
		
		switch (select)
		{
		case 1:  //�����ϵ��
			abs.addPerson();
			break;
		case 2:  //��ʾ��ϵ��
			abs.showPerson();
			break;
		case 3:  //ɾ����ϵ��
			abs.deletePerson();
			break;
		case 4:  //������ϵ��
			abs.findPerson();
			break;
		case 5:  //�޸���ϵ��
			abs.modifyPerson();
			break;
		case 6:  //�����ϵ��
			abs.cleanPerson();
			break;
		case 7: //����ͨѶ¼
			abs.sortingPerson();
			break; 
		case 0:  //�˳�ͨѶ¼
			abs.saveFile();
			cout << "��ӭ�´�ʹ��" << endl;
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
