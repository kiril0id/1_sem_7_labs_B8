/////////////////////////////////////////////////////////////////////////
//B8 Дана строка символов, состоящая из произвольных десятичных цифр.
//Числа с строке отделены друг от друга одним или несколькими пробелами.
//Удалить из строки четные числа.
/////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

int str_lenth(char numb[])
{
	int  i=0;

	while (numb[i]!='\0')
	{
		i++;
	}


	return i;
}
int char_int(char numb[])
{
	int num=0;
	int n = str_lenth(numb);
	for (int i = 0; i < n; i++)
	{
		num += (numb[i] - 48) * pow(10, n - 1 - i);
	}

	return num;
}
int main()

	
{
	char str[20], num[5] ;
	cout << "Enter a string of arbitrary decimal digits." << endl; 
	cout << "Numbers with a string must be separated from each other by one or more spaces." << endl;
	gets_s(str);
	int N = str_lenth(str);
	int k = 0;
	for (int i = 0; i < N; i++)
	{
      if (str[i] == ' ' && num[0] != ' ')
		{
			if (char_int(num) % 2 == 0)
			{
				for (int j = 0; j < str_lenth(num); j++)
				{
					int count = str_lenth(num);
					for (int j = i; j <= N; j++)
					   str[j - count] = str[j + 1 - count];
					count--;
				}
				k = 0;
			}
			else {
				i++;
				k = 0;
			}
         }
		else if (num[0]==' ') k = 0;
		num[k] = str[i];
		num[k + 1] = '\0';
		k++;
	}
	cout << "String without even numbers \n"<<str << endl;
	system("pause");
	return 0;
}