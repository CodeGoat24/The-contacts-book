#include"Addressbooks.h"
#include<algorithm>
#include<fstream>
void Addressbooks::showMenu() {
	if(flag == 0) {
		cout << "            !!!!!!" << endl;
		cout << "            !!!!!!!!!!" << endl;
		cout << "                !!!!!!!!!!!!!!!" << endl;
		cout << "                     !!!!!!!!!!!!!!" << endl;
		cout << "                !!!!!!!!!!!!!!!" << endl;
		cout << "                    !!!!!!!!!!!!" << endl;
		cout << "                    !!!!!!!!!!!!" << endl;
		cout << "                      !!!!!!!!!!!!" << endl;
		cout << "                      !!!!!!!!" << endl;
		cout << "                      !!!!!!!!!!" << endl;
		cout << "                     !!!!!!!!!!!!!!" << endl;
		cout << "                   !!!!!!!!!!!!!!!!" << endl;
		cout << "                  !!!!!!!!!!!!!!!!                                  !!!!!" << endl;
		cout << "                !!!!!!!!!!!!!!!!!!!                               !!!!!!!!!!" << endl;
		cout << "            !!!!!!!!!!!!!!!!!!!!!!!                 !         !!!!!!!!!!" << endl;
		cout << "          !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!              !!     !!!!!!!!!!!!" << endl;
		cout << "         !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!        !!      !!!!!!!!" << endl;
		cout << "          !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "           !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! !!!!!!!!!!!!" << endl;
		cout << "            !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  !!!!!!!!!!!!" << endl;
		cout << "     !!!!!! !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!        !!!!!!" << endl;
		cout << "!!!!!!!��ӭʹ��У��¼����ϵͳ���밴��������뱾ϵͳ��!!!!!!!!!!!!!!!" << endl;
		cout << "        !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!        !!!" << endl;
		cout << "      !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!        !" << endl;
		cout << "        !!!!!! !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "         !!!!! !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! " << endl;
		cout << "                !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "               !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "                !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "                !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "                !!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "                !!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "                !!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "                 !!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "                  !!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "                  !!!!!!!!!!!!!!!!!!!" << endl;
		cout << "                   !!!!!!!!!!!!!!!!" << endl;
		cout << "                    !!!!!!!!!!!!!!!!" << endl;
		cout << "                    !!!!!!!!!!!!!!!" << endl;
		cout << "                     !!!!!!!!!!!!!!" << endl;
		cout << "                      !!!!!!!!!!!!" << endl;
		cout << "                      !!!!!!!!!!!!" << endl;
		cout << "                      !!!!!!!!!!!!" << endl;
		cout << "                        !!!!!!!!" << endl;
		cout << "                        !!!!!!" << endl;
		cout << "                         !!!!" << endl;
		flag++;
		system("pause");
		system("cls");
	}
	cout << "    -------------------------------------------------------------------------------------------------------------" << endl;
	cout << "    |                                        �ء�����������|                                                    |" << endl;
	cout << "    |                                        ����/��7������ �ϣ�/                                               |" << endl;
	cout << "    |                                        �� /�������� ������                                                 |" << endl;
	cout << "    |                                          ����Z ��,���������� /`�c     Ƥ�����Ѽ~                          |" << endl;
	cout << "    |                                          �������������c���� /������                                        |" << endl;
	cout << "    |                                        �� Y����������`�� /����/                                           |" << endl;
	cout << "    |                                          |��?���񡡡� |������/                                          |" << endl;
	cout << "    |                                        ��()�� �ء�������|���ܡ�                                           |" << endl;
	cout << "    |                                        ����>- __�� ���� �� ����                                            |" << endl;
	cout << "    |                                        �� / �ء��� /��?��| �ܣ�                                           |" << endl;
	cout << "    |                                        �� �c_?����(_���� ������                                            |" << endl;
	cout << "    |                                        ����7��������������|��                                             |" << endl;
	cout << "    |                                        �������Dr����`-�D��                                                |" << endl;
	cout << "    |***********************************************************************************************************|" << endl;
	cout << "    |                                      *****ZJUTУ��¼����ϵͳ****                                          |" << endl;
	cout << "    |                                      *****  1�������ϵ��  *****                                          |" << endl;
	cout << "    |                                      *****  2����ʾ��ϵ��  *****                                          |" << endl;
	cout << "    |                                      *****  3��ɾ����ϵ��  *****                                          |" << endl;
	cout << "    |                                      *****  4��������ϵ��  *****                                          |" << endl;
	cout << "    |                                      *****  5���޸���ϵ��  *****                                          |" << endl;
	cout << "    |                                      *****  6�������ϵ��  *****                                          |" << endl;
	cout << "    |                                      *****  7������ͨѶ¼  *****                                          |" << endl;
	cout << "    |                                      *****  0���˳�ͨѶ¼  *****                                          |" << endl;
	cout << "    |                                      *****��Ȩ���У���Ȩ�ؾ�****                                          |" << endl;
	cout << "    -------------------------------------------------------------------------------------------------------------" << endl;
}

/*
Ƥ�����Ѽ��

*/
void Addressbooks:: saveFile() { //�����ļ�������

	ofstream out("У��¼����ϵͳ��Ϣ����.txt", ios::out);

	for(int i = 0; i < m_Size; i++) {
		out << personArray[i].m_Name << " ";
		out << personArray[i].m_Jie << " ";
		out << personArray[i].m_Age << " ";
		out << personArray[i].m_Academy << " ";
		out << personArray[i].m_Class << " ";
		out << personArray[i].m_QQ << " ";
		out << personArray[i].m_Phone << " ";
		out << personArray[i].m_Email << " ";
		out << personArray[i].m_Addr << " ";
		out << endl;
	}
	out.close();
}

void Addressbooks:: getFile() { //�ӱ���txt��ȡ��ϵ����Ϣ
	ifstream in("У��¼����ϵͳ��Ϣ����.txt", ios:: in);

	string name;

	while(in >> name) {
		personArray[m_Size].m_Name = name;
		in >> personArray[m_Size].m_Jie;
		in >> personArray[m_Size].m_Age;
		in >> personArray[m_Size].m_Academy;
		in >> personArray[m_Size].m_Class;
		in >> personArray[m_Size].m_QQ;
		in >> personArray[m_Size].m_Phone;
		in >> personArray[m_Size].m_Email;
		in >> personArray[m_Size].m_Addr;
		mp[name] = 1;
		m_Size++;
	}
	in.close();
}
void Addressbooks::addPerson() {//�����ϵ��
	//�жϵ绰���Ƿ�����
	if (m_Size == MAX) {
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	} else {
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;

		if(mp.count(name)) { //��ϵ���Ѵ��ڣ�������������
			cout << "����ϵ���Ѵ��ڣ�" << endl;
			system("pause");
			system("cls");
			return;
		}

		personArray[m_Size].m_Name = name;
		mp[name] = 1;//��map��Ǵ������������´��жϴ������Ƿ����
		cout << "�������Ա�" << endl;
		cout << "1 -- ��" << endl;
		cout << "2 -- Ů" << endl;

		//�Ա�
		int sex = 0;

		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				personArray[m_Size].m_Sex = sex;
				break;
			}
			cout << "������������������";
		}

		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		personArray[m_Size].m_Age = age;

		//��
		cout << "��������" << endl;
		int jie = 2021;
		while(1) {
			cin >> jie;
			if(jie <= 2022 && jie >= 2000) {
				personArray[m_Size].m_Jie = jie;
				break;
			}
			cout << "������������������";
		}


		//ϵ��ѧԺ��
		cout << "������ѧԺ(�磺�����ѧԺ)" << endl;

		while(1) {
			string ady;
			cin >> ady;
			int len = ady.size() / 2;
			if(len >= 3) {
				personArray[m_Size].m_Academy = ady;
				break;
			} else cout << "������������������";
		}

		//�༶
		cout << "������༶(�磺02��10)" << endl;
		string cl;
		cin >> cl;
		personArray[m_Size].m_Class = cl;

		//QQ
		cout << "��������ϵQQ��" << endl;
		string QQ;
		cin >> QQ;
		personArray[m_Size].m_QQ = QQ;

		//��ϵ�绰
		cout << "��������ϵ�绰��" << endl;
		string phone = "";
		cin >> phone;
		personArray[m_Size].m_Phone = phone;

		//Email
		cout << "������Email��" << endl;
		string email;
		cin >> email;
		personArray[m_Size].m_Email = email;

		//��ͥסַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		personArray[m_Size].m_Addr = address;

		//����ͨѶ¼����
		m_Size++;

		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");
	}
}

//2����ʾ������ϵ����Ϣ
void Addressbooks::showPerson() {
	if (m_Size == 0) {
		cout << "��ǰ��¼Ϊ��" << endl;
	} else {

		for (int i = 0; i < m_Size; i++) {
			cout << "������" << personArray[i].m_Name << "\t";
			cout << "�Ա�" << (personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << personArray[i].m_Age << "\t";
			cout << "��Σ�" << personArray[i].m_Jie << "\t";
			cout << "ѧԺ��" << personArray[i].m_Academy << "\t";
			cout << "�༶��" << personArray[i].m_Class << "\t";
			cout << endl << "\t\t";
			cout << "QQ��" << personArray[i].m_QQ << "\t";
			cout << "Email��" << personArray[i].m_Email << "\t";
			cout << "�绰��" << personArray[i].m_Phone << "\t";
			cout << "סַ��" << personArray[i].m_Addr << endl;
			cout << endl;
		}
	}

	system("pause");
	system("cls");

}

//�ж��Ƿ���ڲ�ѯ����Ա�����ڷ���������������λ�ã������ڷ���-1
int Addressbooks::isExist(string name) { //�������ֲ�����ϵ��

	for (int i = 0; i < m_Size; i++) {
		if (personArray[i].m_Name == name) {
			return i;
		}
	}
	return -1;
}

//ɾ��ָ����ϵ����Ϣ(��������ɾ��)
void Addressbooks::deletePerson() {

	cout << "��������Ҫɾ������ϵ������" << endl;
	string name;
	cin >> name;
	int ret = isExist(name);
	if(ret != -1) {
		for (int i = ret; i < m_Size; i++) {
			personArray[i] = personArray[i + 1];
		}
		m_Size--;
		mp.erase(name);
		cout << "ɾ���ɹ�" << endl;
	} else {
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}


void Addressbooks::print(int ret) {//��ӡ�±�Ϊret����ϵ����Ϣ

	if (ret != -1) {
		cout << "������" << personArray[ret].m_Name << "\t";
		cout << "�Ա�" << (personArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << personArray[ret].m_Age << "\t";
		cout << "��Σ�" << personArray[ret].m_Jie << "\t";
		cout << "ѧԺ��" << personArray[ret].m_Academy << "\t";
		cout << "�༶��" << personArray[ret].m_Class << "\t";
		cout << endl << "\t";
		cout << "QQ��" << personArray[ret].m_QQ << "\t";
		cout << "Email��" << personArray[ret].m_Email << "\t";
		cout << "�绰��" << personArray[ret].m_Phone << "\t";
		cout << "סַ��" << personArray[ret].m_Addr << endl;
		cout << endl;

	} else {
		cout << "���޴���" << endl;
	}
}

//4������ָ����ϵ����Ϣ
void Addressbooks::findPerson() {

	if (m_Size == 0) cout << "��ǰ��¼Ϊ��" << endl;

	cout << "��������Ҫ���ҵķ�ʽ" << endl;
	cout << "1.����" << endl;
	cout << "2.�켶" << endl;
	cout << "3.ѧԺ" << endl;
	cout << "4.�༶" << endl;
	int select = 0;
	cin >> select;
	int ret = -1;
	int f = 0;
	if(select == 1) { //������������(�ڱ�����������Ψһ)

		cout << "��������ϵ������" << endl;
		string name;
		cin >> name;
		ret = isExist(name);
		print(ret);
		goto a;
	} else if(select == 2) {//���ս켶����(�����ж��)

		cout << "��������ϵ�˽��" << endl;
		int jie;
		cin >> jie;
		for (int i = 0; i < m_Size; i++) {
			if (personArray[i].m_Jie == jie) {
				print(i), f = 1;
			}
		}
	} else if(select == 3) {//����ѧԺ����(�����ж��)

		cout << "��������ϵ��ѧԺ" << endl;
		string ady;
		cin >> ady;
		for (int i = 0; i < m_Size; i++) {

			if (personArray[i].m_Academy == ady) {
				print(i), f = 1;
			}
		}
	} else if(select == 4) { //���հ༶����(�����ж��)

		cout << "��������ϵ������ѧԺ" << endl;
		string acd;
		cin >> acd;
		cout << "��������ϵ�����ڰ༶" << endl;
		string cl;
		cin >> cl;
		for (int i = 0; i < m_Size; i++) {
			if (personArray[i].m_Academy == acd && personArray[i].m_Class == cl) {
				print(i), f = 1;
			}
		}
	}
	if(!f) cout << "���޴���" << endl;
a:
	;
	system("pause");
	system("cls");

}

//5���޸�ָ����ϵ����Ϣ
void Addressbooks::modifyPerson() {
	cout << "��������Ҫ�޸ĵ���ϵ������" << endl;
	string name;
	cin >> name;

	int ret = isExist(name);//�жϴ����Ƿ���ڣ��������򷵻��±�

	if (ret != -1) {
		mp.erase(name);
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		mp[name] = 1;
		personArray[ret].m_Name = name;

		cout << "�������Ա�" << endl;
		cout << "1 -- ��" << endl;
		cout << "2 -- Ů" << endl;

		//�Ա�
		int sex = 0;
		while (true) {

			cin >> sex;
			if (sex == 1 || sex == 2) {
				personArray[ret].m_Sex = sex;
				break;
			}

			cout << "������������������";
		}

		//����
		cout << "���������䣺" << endl;

		int age = 0;
		cin >> age;
		personArray[ret].m_Age = age;

		//��
		cout << "��������" << endl;

		int jie = 2021;
		while(1) {
			cin >> jie;
			if(jie <= 2022 && jie >= 2000) {
				personArray[ret].m_Jie = jie;
				break;
			}
			cout << "������������������";
		}


		//ϵ��ѧԺ��
		cout << "������ѧԺ(�磺�����ѧԺ)" << endl;

		while(1) {
			string ady;
			cin >> ady;
			int len = ady.size() / 2;
			if(len >= 3) {
				personArray[ret].m_Academy = ady;
				break;
			} else cout << "������������������";
		}

		//�༶
		cout << "������༶(�磺02��10)" << endl;
		string cl;
		cin >> cl;
		personArray[ret].m_Class = cl;

		//QQ
		cout << "��������ϵQQ��" << endl;
		string QQ;
		cin >> QQ;
		personArray[ret].m_QQ = QQ;

		//��ϵ�绰
		cout << "��������ϵ�绰��" << endl;
		string phone = "";
		cin >> phone;
		personArray[ret].m_Phone = phone;

		//Email
		cout << "������Email��" << endl;
		string email;
		cin >> email;
		personArray[ret].m_Email = email;

		//��ͥסַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		personArray[ret].m_Addr = address;

		cout << "�޸ĳɹ�" << endl;
	} else {
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");

}

//���������ϵ��
void Addressbooks::cleanPerson() {
	m_Size = 0;
	mp.clear();
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}
int cmp1(const Person& a, const Person& b) {
	if(a.m_Name.size() != b.m_Name.size())

		return a.m_Name.size() < b.m_Name.size();

	return a.m_Name < b.m_Name;
}
int cmp2(const Person& a, const Person& b) {
	if(a.m_Jie == b.m_Jie) { //����ͬ������������

		if(a.m_Name.size() != b.m_Name.size())

			return a.m_Name.size() < b.m_Name.size();

		return a.m_Name < b.m_Name;
	}

	return a.m_Jie < b.m_Jie;
}
//"---------------------------��������켶-----------------------"
void swap(int &a, int &b) {
	int t = a;
	a = b;
	b = t;
}


int split(Person a[], int low, int high) {
	int i = low;
	int x = a[i].m_Jie;

	for(int j = low+1; j<=high; j++)

		if (a[j].m_Jie <= x) {
			i++;
			swap(a[i], a[j]);
		}
	swap(a[low], a[i]);
	return i;
}


void quicksort(Person a[], int low, int high) {
	if (low < high) {
		int i = split(a, low, high);    
		quicksort(a, low, i - 1);    
		quicksort(a, i + 1, high);    
	}
}
//"-------------------------------------------------------------------------"
int Ssplit(Person a[], int low, int high) {
	int i = low;
	string x = a[i].m_Name;

	for(int j = low+1; j<=high; j++)

		if (a[j].m_Name <= x) {
			i++;
			swap(a[i], a[j]);
		}
	swap(a[low], a[i]);
	return i;
}


void Squicksort(Person a[], int low, int high) {
	if (low < high) {
		int i = split(a, low, high);    
		Squicksort(a, low, i - 1);    
		Squicksort(a, i + 1, high);    
	}
}
void Addressbooks::sortingPerson() {
	if(m_Size == 0) {
		cout << "��ǰ��¼Ϊ�գ�" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "��ѡ��������ϵ�˷�ʽ��" << endl;
	cout << "1.����" << endl;
	cout << "2.�켶" << endl;
	int select = 0;
	cin >> select;

	if(select == 1) {

//		sort(personArray, personArray + m_Size, cmp1);
		Squicksort(personArray, 0, m_Size - 1);
		cout << "����ɹ���" << endl;
		showPerson();

	} else if(select == 2) {

//		sort(personArray, personArray + m_Size, cmp2);
		quicksort(personArray, 0, m_Size - 1);
		cout << "����ɹ���" << endl;
		showPerson();

	} else cout << "����ʧ�ܣ�" << endl;

	if(select != 1 && select != 2) {
		system("pause");
		system("cls");
	}

}
