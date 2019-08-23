#include<iostream>
using namespace std;
#define tab "\t"
 class Element
{
	int Data; //�������� ���������
	Element* pNext;// ����� ��������� ��������. 
	
public:
	Element(int Data, Element* pNext = nullptr)
	{
		this->Data = Data;
		this->pNext = pNext;
		cout << "EConstructor:\t" << this << endl;
	}
	~Element()
	{
		cout << "EDestructor:\t" << this << endl;
	}
	friend class ForwardList;
};
class ForwardList
{
	Element* Head; // ��������� �� ������ ������
public:
	ForwardList()
	{
		this->Head = nullptr;
		cout << "LConstructor:\t" << this << endl;
	}
	//				���������� ��������� � ������:
	void push_front(int Data)
	{
		//Data - ��������� ��������
		// 1) ������� �������, � �������	 ����� �������� ��������
		Element* New = new Element(Data);
		New->pNext = Head;
		Head = New;
	}
	void push_back(int Data)
	{

	}
	void print()
	{
		Element* Temp = Head;
		//��������� - ��� ��������� ��� ������ �������� ����� �������� ������ � ��������� ���������� ������.
		while (Temp != nullptr)
		{
			cout << Temp << tab << Temp->Data << tab << Temp->pNext << endl;
			Temp = Temp->pNext; // ������� �� �������� �������
		}
	}
};
void main()
{
	setlocale(LC_ALL, "");
	int n; //���������� ���������
	cout << "������� ���������� ���������:";
	cin >> n;
	ForwardList fl;
	for (int i = 0; i < n; i++)
	{
		fl.push_front(rand() % 100);
		}
	fl.print();
}