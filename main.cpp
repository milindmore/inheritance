//#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <map>
#include <utility>
using namespace std;
class Teacher
{
public:
    string type1;
  //Teacher():type1("General Subject") {}
    Teacher(string type):type1(type) {}

  virtual   string gettype()
    {
       return type1;
    }
  virtual  void print()
    {
     cout<<endl<<type1;
    }
};

class Maths : public Teacher
{

public:
    //Maths()  { type1="Math Teacher";  }
    Maths(string mtp):Teacher(mtp) {  }
    string gettype()
    {
       return type1;
    }
    void print()
    {
     cout<<endl<<type1;
    }
};


class Science : public Teacher
{
    //string type1;
public:
   // Science() { type1="Science teacher";  }
    Science(string sci):Teacher(sci) {  }
    string gettype()
    {
       return type1;
    }
    void print()
    {
     cout<<endl<<type1;
    }
};


int main(int argc, char *argv[])
{
    Teacher *t1 = new Teacher("General Teacher");
    t1->print();
    string t=t1->gettype();


    Science science("Science Teacher");
    t1 =&science;
    t1->print();

    Maths     maths("Math Teacher");   // Parameterize constructure
    t1 =&maths;
    t1->print();

    vector<int> mvec = {10,20,30,40};
    auto pt = mvec.end();
    pt--;
   // for(auto it=mvec.begin();it!=mvec.end(); ++it   )
    cout<<endl<<*pt;   // why pointer reduce by one to print last element ?
    cout<<endl<<mvec[mvec.size()-1  ];


    map<int, int> mp = { { 1, 10 },{ 7, 20 }, { 3, 30 }} ;
    auto itrn = mp.find(7);
    cout<<endl<<"element 7 is   "<<itrn->second;

    auto lastelement = mp.end();
    cout<<endl<<"Last Element "<< lastelement->first ;
    lastelement++;
    cout<<endl<<"Last Element "<< lastelement->second ;


     std::map<int, int>::iterator it = mp.end();
     cout<<endl <<"  "<< mp[it->first];
     //cout<<endl <<"  "<< it->second;

    pair<int,int> pr;
       pr = make_pair(it->first,*(it->second) ) ;

    cout<<endl<<"Last Element "<<mp.end()->first ;
    //lastelement++;
    cout<<endl<<"Last Element "<< mp.end()->second ;


    //map<int ,int> mp =  mp.find(7);
    getchar();


}
