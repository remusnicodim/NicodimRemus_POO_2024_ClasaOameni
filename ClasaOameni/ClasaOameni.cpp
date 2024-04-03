#include "pch.h"

using namespace System;

ref class Oameni
{
public:
    
    void SetName(String^ nm)
    {
        name = nm;
    }
    String^ GetName()
    {
        return name;
    }
    void SetDateOfBirth(int year)
    {   
        BirthYear = year;
    }
    int GetYearOfBirth()
    {
        return BirthYear;
    }
private:
    String^ name;
    int BirthYear;
};

int main(array<System::String ^> ^args)
{
    Oameni barbat, femeie;
    barbat.SetDateOfBirth(1981);
    barbat.SetName("Remus");
    femeie.SetDateOfBirth(1982);
    femeie.SetName("Aurora");

    Console::WriteLine("Numele barbatului este " + barbat.GetName() + " si este nascut in anul " + barbat.GetYearOfBirth());
    Console::WriteLine("Numele femeii este " + femeie.GetName() + " si este nascuta in anul " + femeie.GetYearOfBirth());
    Console::WriteLine();

    Console::WriteLine("Press any key to exit...");
    Console::ReadKey();
    return 0;

}
