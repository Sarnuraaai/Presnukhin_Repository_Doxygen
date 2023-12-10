#pragma once
/** 
	@file		Presnukhin_Aeroflot_class.h
	@brief		������������ ���� ������ ��������
	@copyright	����
	@author		��������� �.�.
	@date		10-12-2023
	@version	1.0.0
\par ���������� �����:
	@ref Presnukhin_Aeroflot_class
\par �������� �����:
	@ref Presnukhin_Aeroflot_class
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;


/// ����� �������� ���������
/** �������� ������ ��������� � ������ ��� ������ � ���
*/
class Presnukhin_Aeroflot_class
{
private:
	string LOC_arrival; ///< ����� ����������
	int number;			///< ����� �����
	int type;			///< ��� �������
	string Time;		///< ����� ������
	string Day;			///< ���� ������

public:
	/// <summary>
	/// ����������� � ���������� ����� ������
	/// ������ ������ � ����� � �������������� ����
	/// </summary>
	/// <param name="arrival">����� ����������</param>
	/// <param name="num">����� �����</param>
	/// <param name="ty">��� �������</param>
	/// <param name="Ti">����� ������</param>
	/// <param name="day">���� ������</param>
	Presnukhin_Aeroflot_class(string arrival, int num, int ty, string Ti, string day) {
		LOC_arrival = arrival;
		number = num;
		type = ty;
		Time = Ti;
		Day = day;
	}
	/// <summary>
	/// ������� ��� ���������� � �����
	/// </summary>
	void print() {
		cout << LOC_arrival << " " << number << " " << type << " " << Time << " " << Day;
	}
	/// <summary>
	/// ��������� �����, ������������ ������ ������ ��� ��������� ������ ����������
	/// </summary>
	/// <typeparam name="T">��������� ���</typeparam>
	/// <param name="flot">�����</param>
	/// <param name="arrival">����� ����������</param>
	/// <returns></returns>
	template <typename T>
	Presnukhin_Aeroflot_class Show_arrival(T flot, string arrival) {
		for (auto it = flot.begin(); it != flot.end(); ++it)
		{
			Aeroflot arive = *it;
			if (arive.LOC_arrival == arrival)
			{
				print(arive);
			}
		}
	}
	/// <summary>
	/// ��������� �����, ������������ ������ ������ ��� ��������� ��� ������
	/// </summary>
	/// <typeparam name="T">��������� ���</typeparam>
	/// <param name="flot">�����</param>
	/// <param name="day">���� ������</param>
	/// <returns></returns>
	template <typename T>
	Presnukhin_Aeroflot_class Show_day(T flot, string day) {
		for (auto it = flot.begin(); it != flot.end(); ++it)
		{
			Aeroflot D_day = *it;
			if (D_day.Day == day)
			{
				print(D_day);
			}
		}
	}
	/// <summary>
	/// ��������� �����, ������������ ������ ������ ��� ��������� ��� ������, ����� ������ ��� ������� ������ ���������
	/// </summary>
	/// <typeparam name="T">��������� �����</typeparam>
	/// <param name="flot">�����</param>
	/// <param name="day">���� ������</param>
	/// <param name="Ti">����� ������</param>
	/// <returns></returns>
	template <typename T>
	Presnukhin_Aeroflot_class Show_time(T flot, string day, string Ti) {
		for (auto it = flot.begin(); it != flot.end(); ++it)
		{
			Aeroflot D_day_time = *it;
			if (D_day_time.Day == day & D_day_time.Time > Ti)
			{
				print(D_day_time);
			}
		}
	}
};

