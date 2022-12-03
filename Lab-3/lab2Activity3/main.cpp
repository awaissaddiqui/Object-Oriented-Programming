#include <iostream>
using namespace std;

class IntegerSet
{
	private:
		int arr[50];

	public:
		IntegerSet()
		{
			for(int i = 0; i < 50; i++)
				arr[i] = 0;
		}

		void newIntegerSet()
		{
			int n;
			cout << "Enter the number of elements : "; cin >> n;
			for(int i = 0; i < n; i++)
			{
				int temp;
				cin >> temp;
				arr[temp] = 1;
			}

			cout << "Set of " << n << " elements created" << endl;
		}

		void unionOfIntegerSets(IntegerSet obj1, IntegerSet obj2)
		{
			cout << "Union : ";
			for(int i = 0; i < 50; i++)
			{
				if(obj1.arr[i] == 1 || obj2.arr[i] == 1)
					arr[i] = 1;
				else
					arr[i] = 0;
			}
		}

		void intersectionOfIntegerSets(IntegerSet obj1, IntegerSet obj2)
		{
			cout << "Intersection : ";
			for(int i = 0; i < 50; i++)
			{
				if(obj1.arr[i] == 1 && obj2.arr[i] == 1)
					arr[i] = 1;
				else
					arr[i] = 0;
			}
		}

		void insertElement()
		{
			int k;
			cout << "Enter element to be inserted : "; cin >> k;
			arr[k] = 1;
		}

		void deleteElement()
		{
			int k;
			cout << "Enter element to be deleted : "; cin >> k;
			arr[k] = 0;
		}

		void setPrint()
		{
			int count = 0;
			for(int i = 0; i < 50; i++)
			{
				if(arr[i] == 1)
				{
					cout << i << " ";
					count++;
				}
			}
			if(count == 0)
				cout << "Set is empty";

			cout << endl;
		}

		void isEqualTo(IntegerSet obj1)
		{
			int flag = 0;
			for(int i = 0; i < 50; i++)
			{
				if(arr[i] != obj1.arr[i])
				{
					flag = 1;
					break;
				}
			}

			if(flag == 0)
				cout << "Both sets are equal." << endl;
			else
				cout << "Both sets are not equal." << endl;
		}
};

int main()
{
	IntegerSet obj1, obj2, obj3, obj4;

	obj1.newIntegerSet();
	obj2.newIntegerSet();
	obj3.unionOfIntegerSets(obj1, obj2);
	obj3.setPrint();
	obj4.intersectionOfIntegerSets(obj1, obj2);
	obj4.setPrint();
	obj3.insertElement();
	obj3.setPrint();
	obj3.deleteElement();
	obj3.setPrint();
	obj3.isEqualTo(obj4);

	return 0;
}
