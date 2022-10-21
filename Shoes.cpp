#include<bits/stdc++.h>
#include"Shoes.h"
using namespace std;
Shoes::Shoes()
{
    this->ID = this->Name = this->Sex = this->Producer = "";
    this->Size = 0;
    this->Price = 0;

}
Shoes::Shoes (string ID, string Name, int Size, string Producer, float Price, string Sex )
      :ID(ID),Name(Name),Size(Size),Producer(Producer),Price(Price),Sex(Sex)
{

}
Shoes::Shoes (const Shoes &)
      :ID(ID),Name(Name),Size(Size),Producer(Producer),Price(Price),Sex(Sex)
{

}
Shoes::~Shoes()
{

}
void Shoes::SetID(string ID)
{
    this->ID = ID;
}
string Shoes::GetID()
{
    return this->ID;
}
void Shoes::SetName(string Name)
{
    this->Name = Name;
}
string Shoes::GetName()
{
    return this->Name;
}
void Shoes::SetSize(int Size)
{
    this->Size = Size;
}
int Shoes::GetSize()
{
    return this->Size;
}
void Shoes::SetProducer(string Producer)
{
    this->Producer = Producer;
}
string Shoes::GetProducer()
{
    return this->Producer;
}
void Shoes::SetPrice( float Price)
{
    this->Price = Price;
}
float Shoes::GetPrice()
{
    return this->Price;
}
void Shoes::SetSex( string Sex)
{
    this->Sex = Sex;
}
string Shoes::GetSex()
{
    return this->Sex;
}
ostream &operator<<(ostream &o, Shoes b)
{
    o << 
    return o;
}
istream &operator>>(istream &i, Shoes &b)
{
    i >> 
    return i;
}
void Shoes::Show()
{
    
}