#pragma once
/** 
	@file		Presnukhin_Aeroflot_class.h
	@brief		Заголовочный файл класса Аэрофлот
	@copyright	ВоГУ
	@author		Преснухин А.П.
	@date		10-12-2023
	@version	1.0.0
\par Использует класс:
	@ref Presnukhin_Aeroflot_class
\par Содержит класс:
	@ref Presnukhin_Aeroflot_class
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;


/// Класс описания аэрофлота
/** Содержит данные аэрофлота и методы для работы с ним
*/
class Presnukhin_Aeroflot_class
{
private:
	string LOC_arrival; ///< Пункт назначения
	int number;			///< Номер рейса
	int type;			///< Тип самолёта
	string Time;		///< Время вылета
	string Day;			///< День недели

public:
	/// <summary>
	/// Конструктор с заполнений полей класса
	/// Создаёт запись о рейсе и инициализирует поля
	/// </summary>
	/// <param name="arrival">Пункт назначения</param>
	/// <param name="num">Номер рейса</param>
	/// <param name="ty">Тип самолёта</param>
	/// <param name="Ti">Время вылета</param>
	/// <param name="day">День недели</param>
	Presnukhin_Aeroflot_class(string arrival, int num, int ty, string Ti, string day) {
		LOC_arrival = arrival;
		number = num;
		type = ty;
		Time = Ti;
		Day = day;
	}
	/// <summary>
	/// Выводит всю информацию о рейсе
	/// </summary>
	void print() {
		cout << LOC_arrival << " " << number << " " << type << " " << Time << " " << Day;
	}
	/// <summary>
	/// Шаблонный класс, показывающий список рейсов для заданного пункта назначения
	/// </summary>
	/// <typeparam name="T">шаблонный тип</typeparam>
	/// <param name="flot">рейсы</param>
	/// <param name="arrival">Пункт назначения</param>
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
	/// Шаблонный класс, показывающий список рейсов для заданного дня недели
	/// </summary>
	/// <typeparam name="T">шаблонный тип</typeparam>
	/// <param name="flot">рейсы</param>
	/// <param name="day">день недели</param>
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
	/// Шаблонный класс, показывающий список рейсов для заданного дня недели, время вылета для которых больше заданного
	/// </summary>
	/// <typeparam name="T">шаблонный класс</typeparam>
	/// <param name="flot">рейсы</param>
	/// <param name="day">день недели</param>
	/// <param name="Ti">время вылета</param>
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

