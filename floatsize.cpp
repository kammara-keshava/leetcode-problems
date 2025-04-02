// // #include<iostream>
// // #include<iomanip>
// // #include<limits>
// // using namespace std;
// // int main(){
// // cout<<numeric_limits<float>::digits10<<endl;
// // float x=12.3456678;
// // double y=1233.44566780;
// // long double z=123.4567789908754321l;
// // cout<<setprecision(15);
// // cout<<z<<endl;
// // cout<<setprecision(8);
// // cout<<x<<endl;
// // cout<<setprecision(12);
// // cout<<y;
// // }


// #include<iostrea
// m>

// using namespace std;
// int main(){
//     int i=3,j=2;
//     int min = i < j ? i : j;
//     cout<<min;
// }


// Example: defining the constructor outside the class

// #include<iostream>
// using namespace std;
// class student
// {
// 	int rno;
// 	char name[50];
// 	double fee;
// 	public:
// 	student();
// 	void display();
	
// };

// 	student::student()
// 	{
// 		cout<<"Enter the RollNo:";
// 		cin>>rno;
// 		cout<<"Enter the Name:";
// 		cin>>name;
// 		cout<<"Enter the Fee:";
// 		cin>>fee;
// 	}

// void student::display()
// 	{
// 		cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
// 	}
	
// int main()
// {
// 	student s;
// // // 	s.display();
// #include<iostream>
// #include<string>
// using namespace std;
// class person{
//     public:
//     int roll;
//     char name;
//     int fee;
//     person(int roll,char name,int fee){
   
// }

//   void displayinfo(){
//      cout<<roll<<endl<<name<<endl<<fee;
//     }
    
// };
// int main(){ 

//     person person1;
//     person1.displayinfo();
// }





// #include<iostream>
// #include<string>
// using namespace std;

// class person {
// public:
//     int roll;
//     string name;
//     int fee;

//     person(int roll, string name, int fee) {
//         this->roll = roll;
//         this->name = name;
//         this->fee = fee;
//     }

//     void displayinfo() {
//         cout << "Roll: " << roll << endl;
//         cout << "Name: " << name << endl;
//         cout << "Fee: " << fee << endl;
//     }
// };

// int main() {
//     int roll;
//     string name;
//     int fee;

//     cout << "Enter the roll: ";
//     cin >> roll;
//     cout << "Enter the name: ";
//     cin >> name;
//     cout << "Enter the fee: ";
//     cin >> fee;

//     person person1(roll, name, fee);
//     cout << "Person 1 Info:" << endl;
//     person1.displayinfo();

//     // Testing with another person
//     cout << "\nEnter the roll: ";
//     cin >> roll;
//     cout << "Enter the name: ";
//     cin >> name;
//     cout << "Enter the fee: ";
//     cin >> fee;

//     person person2(roll, name, fee);
//     cout << "Person 2 Info:" << endl;
//     person2.displayinfo();

//     return 0;
// }



// #include<iostream>
// #include<string>
// using namespace std;
// class person{
//     public:
//     int id;
//     string name;
// };
// int main(){
// person per;
// cin>>per.id;
// cin>>per.name;
// cout<<per.id<<endl;
// cout<<per.name<<endl;
// }

// #include<iostream>
// using namespace std;
// class a{
//     public:
//     int x;
//     void display(){
//   cout<<"value x:"<<x<<endl;
//     }
// };
// class b:public a{
//     public:
//     int y;
//     void display(){
//         cout<<"value y:"<<y<<endl;
//     }

// };
// int main(){
//     a an;
//     b ann;
//     cin<<an.x;
//     cin<<ann.y;
//    a *A;
//    b B;
//    A->display();
//    return 0;
// }

// #include <iostream>
// using namespace std;
// class A //concrete base class
// {
// int x=10;
// public:
// void display() // virtual void display()
// {
// cout << "Value of x is : " << x<<endl;
// }
// };
// class B: public A //concrete derived class
// {
// int y = 15;
// public:
// void display()
// {
// cout << "Value of y is : " <<y<<endl;
// }
// };
// int main()
// {
// A* a; //pointer of base class
// B b; //object of derived class
// a = &b;
// a->display();
// // B->display();
// return 0;
// }


#include<iostream>
using namespace std;
class kesh{
    public:
    string name;
};
int main(){
    kesh k;
    string name;
    std::cin>>k.name;
    cout<<k.name;
}
