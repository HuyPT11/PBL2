#include<bits/stdc++.h>
using namespace std;
class Shoes
{
    public:
      string ID;
      string Name;
      int Size;
      string Producer;
      double Price;
      string Sex;
      Shoes();
      ~Shoes();
      Shoes (string ID, string Name, int Size, string Producer, float Price, string Sex );
      Shoes(const Shoes &);
      void SetID(string ID);
      string GetID();
      void SetName(string Name);
      string GetName();
      void SetSize(int Size);
      int GetSize();
      void SetProducer(string Producer);
      string GetProducer();
      void SetPrice(float Price);
      float GetPrice();
      void SetSex(string Sex);
      string GetSex();
      void Show();
};