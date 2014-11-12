#include "Date.h"
#include <iostream>
#include <string>
#include <typeinfo>
#include "Complex.h"
#include "Employee.h"
#include "Stack.h"	// Stack class definition
using namespace std;

template <class A>
void compareStacks(Stack<A>&, Stack<A>& );

int main(){
    Stack<int> int1Stack, int2Stack;		// 2 int stacks
    Stack<char> char1Stack,char2Stack;		// 2 char stacks
    Stack<double> double1Stack,double2Stack;		// 2 double stacks
    Stack<Complex> complex1Stack,complex2Stack;	// 2 complex number stacks
    Stack<string> string1Stack,string2Stack;		// 2 string stacks
    Stack<Date> date1Stack,date2Stack;			// 2 Date stacks
    Stack<Employee> employee1Stack,employee2Stack;	// 2 Employee stacks

    cout<<"\n**int-int   Testing integers   int-int**\n";
    cout<<"Create two 6-element integer-stacks(int1Stack and int2Stack)."<<endl;
    cout<<"\nPush integers into the integer-stacks.";
    cout<<"\n  Push integers into the int1Stack.";
    int1Stack.push(1);
    int1Stack.push(2);
    int1Stack.push(-1);
    int1Stack.push(-1);
    cout<<"\n  Push integers into the int2Stack.";
    int2Stack.push(1);
    int2Stack.push(4);
    int2Stack.push(1);
    int2Stack.push(-1);

    cout<<"\n\n Pop out integer objects from the int-stack to do comparison.";
    // test integers from each stack
    compareStacks(int1Stack, int2Stack);

    cout<<"\n**char-char  Testing chars  char-char**";
    cout<<"\nCreate two 6-element char-stacks(char1Stack and char2Stack)."<<endl;
    cout<<"\nPush chars into the char-stacks.";
    cout<<"\n  Push chars into the char1Stack."; 
    char1Stack.push('a');
    char1Stack.push('a');
    char1Stack.push('-a');
    char1Stack.push('-a');
    
    cout<<"\n  Push char into the char2Stack.";
    char2Stack.push('a');
    char2Stack.push('c');
    char2Stack.push('a');
    char2Stack.push('-a');

    cout<<"\n\n Pop out char objects from the char-stack to do comparison.";
    // compare two char stacks
    compareStacks(char1Stack, char2Stack);
    
    cout<<"\n**double-double   Testing doubles   doubles-double**";
    cout<<"\nCreate two 6-element double-stacks (double1Stack and double2Stack)."<<endl;
    cout<<"\nPush doubles into the double-stacks.";
    cout<<"\n  Push doubles into the double1Stack.";
    double1Stack.push(2.2);
    double1Stack.push(2.2);
    double1Stack.push(-2.2);
    double1Stack.push(-2.2);

    cout<<"\n  Push doubles into the double2Stack.";
    double2Stack.push(2.2);
    double2Stack.push(2.3);
    double2Stack.push(2.2);
    double2Stack.push(-2.2);

    cout<<"\n\n Pop out double objects from the double-stack to do comparison.";
    // compare two double stacks
    compareStacks(double1Stack,double2Stack);
    
    cout<<"\n**Complex-Complex  Testing Complex  Complex-Complex**";
    cout<<"\nCreate two 6-element Complex-stacks (complex1Stack and complex2Stack).\n";
    cout<<"\nPush complex objects into the Complex-stacks.";
    cout<<"\n Push complex objects into the complex1Stack.";
    complex1Stack.push(Complex(10,5));
    complex1Stack.push(Complex(10,5));
    complex1Stack.push(Complex(10,-5));
    complex1Stack.push(Complex(10,-5));
 
    cout<<"\n Push complex objects into the complex2Stack.";
    complex2Stack.push(Complex(10,5));
    complex2Stack.push(Complex(10,54));
    complex2Stack.push(Complex(10,5));
    complex2Stack.push(Complex(10,-5));

    cout<<"\n\n Pop out Complex objects from the Complex-stack to do comparison.";
    // compare two complex stacks
    compareStacks(complex1Stack,complex2Stack);

    cout<<"\n**String-String  Testing String  String-String**";
    cout<<"\nCreate two 6-element String-stacks (string1Stack and string2Stack).\n";
    cout<<"\nPush string objects into the string-stacks.";
    cout<<"\n Push string objects into the string1Stack.";
    string1Stack.push(string("abcdefg"));
    string1Stack.push(string("abcdefg"));
    string1Stack.push(string("-abcdefg"));
    string1Stack.push(string("-abcdefg"));

    cout<<"\n Push string objects into the string2Stack.";
    string2Stack.push(string("abcdefg"));
    string2Stack.push(string("abcdefh"));
    string2Stack.push(string("abcdefg"));
    string2Stack.push(string("-abcdefg"));

    cout<<"\n\n Pop out String objects from the String-stack to do comparison.";
    // compare two string stacks
    compareStacks(string1Stack,string2Stack);

    cout<<"\n**Date-Date  Testing Date   Date-Date**";
    cout<<"\nCreate two 6-element Date-stacks (date1Stack and date2Stack).\n";
    cout<<"\nPush Date objects into the Date-stacks.";
    cout<<"\n Push Date objects into the date1Stack.";
    date1Stack.push(Date(2,31,2014));
    date1Stack.push(Date(2,13,2014));
    date1Stack.push(Date(-2,13,2014));
    date1Stack.push(Date(-2,13,2014));

    cout<<"\n Push Date obects into the date2Stack.";
    date2Stack.push(Date(2,31,2014));
    date2Stack.push(Date(2,14,2014));
    date2Stack.push(Date(2,13,2014));
    date2Stack.push(Date(-2,13,2014));

    cout<<"\n\n Pop out Date objects from the Date-stack to do comparison.";
    // compare two Date stacks
    compareStacks(date1Stack,date2Stack);

    // instantiate two Date objects for birth dates for Employee class
    Date ed1(3,1,1975), ed2(3,2,1975);

    cout<<"\n**Employee-Employee  Testing Employee  **";
    cout<<"\nCreate two 6-element Employee-stacks (employee1Stack and employee2Stack).\n";
    cout<<"\nPush Employee objects into the Employee-stack.";
    cout<<"\n Push Employee objects in the employee1Stack.";
    employee1Stack.push(Employee("John","Lin",ed1));
    employee1Stack.push(Employee("1John","Lin",ed1));
    employee1Stack.push(Employee("John","1Lin",ed1));
    employee1Stack.push(Employee("John","Lin",ed1));
    employee1Stack.push(Employee("John","1Lin",ed1));
    employee1Stack.push(Employee("1John","1Lin",ed2));

    cout<<"\n Push Employee objects in the employee2Stack.";
    employee2Stack.push(Employee("John","Lin",ed1));
    employee2Stack.push(Employee("John","Lin",ed1));
    employee2Stack.push(Employee("John","Lin",ed1));
    employee2Stack.push(Employee("John","1Lin",ed2));
    employee2Stack.push(Employee("John","Lin",ed2));
    employee2Stack.push(Employee("1John","1Lin",ed2));

    cout<<"\n\n Pop out Employee objects from the E mployee-stack to do comparison.";
    // compare two Employee stacks
    compareStacks(employee1Stack,employee2Stack);
    
    system("PAUSE");
    return 0;
}

template <class A>
void compareStacks(Stack<A>& stack1, Stack<A>& stack2){
    while (!stack1.empty() && !stack2.empty()){ // continue while stack is not empty
	cout<<"\n  Objects of "<<typeid(A).name()<<" :"<<endl;
	cout<<"\t"<<stack1.top()<<" and \n"<<"\t"<<stack2.top();
	cout<<"\n\tare "<<(stack1.top()==stack2.top()?"equal.":"\"NOT\" equal.")<<endl;
	stack1.pop();
	stack2.pop();
    }
}
