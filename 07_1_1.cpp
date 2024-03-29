#include <iostream>
using namespace std;

class Car
{
private:
	int gasolineGauge;
public:
	Car(int gas)
		:gasolineGauge(gas)
	{
		
	}
	int GetGasGauge()
	{
		return gasolineGauge;
	}
};

class HybridCar : public Car
{
private:
	int electricGauge;
public:
	HybridCar(int gas, int elec)
		:Car(gas), electricGauge(elec)
	{
		
	}
	int GetElecGauge()
	{
		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar
{
private:
	int waterGauge;
public:
	HybridWaterCar(int gas, int elec, int water)
		:HybridCar(gas, elec), waterGauge(water)
	{
		
	}

	void ShowCurrentGauge()
	{
		cout << "�ܿ� ���ָ�: " << GetGasGauge() << endl;
		cout << "�ܿ� ���ⷮ: " << GetElecGauge() << endl;
		cout << "�ܿ� ���ͷ�: " << waterGauge << endl;
	}
};

int main()
{
	HybridWaterCar car1(10, 20, 30);
	car1.ShowCurrentGauge();

	return 0;
}