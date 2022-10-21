#include<bits/stdc++.h>
using namespace std;
class Date
{
    public:
     int Day;
     int Month;
     int Year; 
    public:
     Date(): Day(Day), Month(Month), Year(Year)
     {

     }
     ~Date()
     {

     }

};
class Bill: public Date
{
    friend class ManageBill;
    Date d;
    string IDB;
    string IDC;
    string NameCustomer;
    float SumPrice;
    Bill();
    ~Bill();
    Bill(Date d, string IDB, string IDC, string NameCustomer,float SumPrice);
    Bill(const Bill &);
    void SetDay(int Day);
    int GetDay();
    void SetMonth(int Month);
    int GetMonth();
    void SetYear(int Year);
    int GetYear();
    void SetIDB(string IDB);
    string GetIDB();
    void SetIDC(string IDC);
    string GetIDC();
    void SetNameCustomer(string NameCustomer);
    string GetNameCustomer();
    void SetSumPrice(float SumPrice);
    float GetSumPrice();
    void Show();
};
Bill::Bill()
{
    this->Day = this->Month = this->Year = 0;
    this->IDB = this->IDC = "";
    this->NameCustomer = "";
    this->SumPrice = 0;
}
Bill::Bill(Date d, string IDB, string IDC, string NameCustomer,float SumPrice)
     :IDB(IDB),IDC(IDC),NameCustomer(NameCustomer),SumPrice(SumPrice)
{

}
Bill::Bill(const Bill & ):IDB(IDB),IDC(IDC),NameCustomer(NameCustomer),SumPrice(SumPrice)
{

}
Bill::~Bill()
{

}
void Bill::SetDay(int Day)
{
    this->Day = Day;
}
int Bill::GetDay()
{
    return this->Day;
}
void Bill::SetMonth(int Month)
{
    this->Month = Month;
}
int Bill::GetMonth()
{
    return this->Month;
}
void Bill::SetYear(int Year)
{
    this->Year = Year;
}
int Bill::GetYear()
{
    return this->Year;
}
void Bill::SetIDB( string IDB)
{
    this->IDB = IDB;
}
string Bill::GetIDB()
{
    return this->IDB;
}
void Bill::SetIDC( string IDC)
{
    this->IDC = IDC;
}
string Bill::GetIDC()
{
    return this->IDC;
}
void Bill::SetNameCustomer(string NameCustomer)
{
    this->NameCustomer = NameCustomer;
}
string Bill::GetNameCustomer()
{
    return this->NameCustomer;
}
void Bill::SetSumPrice(float SumPrice)
{
    this->SumPrice = SumPrice;
}
float Bill::GetSumPrice()
{
    return this->SumPrice;
}