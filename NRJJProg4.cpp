//Nathan Jermann, CSC 145 A, assignment #4, 3-5-19
//Program which tests the equalList function
#include "List.h"
#include <iostream>
using namespace std;

bool equalList(List & a, List & b);//function signatures
void boolTest(bool a);

int main(){

    List list1 = List();//initialize 4 list objects
    List list2 = List();
    List list3 = List();
    List list4 = List();

    list1.Insert(0, 21);//initialize the elements of list 1
    list1.Insert(1, 47);
    list1.Insert(2, 87);
    list1.Insert(3, 35);
    list1.Insert(4, 92);

    list2.Insert(0, 21);//initialize the elements of list 2
    list2.Insert(1, 47);//numbers equal to list 1
    list2.Insert(2, 87);
    list2.Insert(3, 35);
    list2.Insert(4, 92);

    list3.Insert(0, 10);//initialize the elements of list 3
    list3.Insert(1, 20);//different numbers than list 1
    list3.Insert(2, 30);
    list3.Insert(3, 40);
    list3.Insert(4, 50);

    list4.Insert(0, 21);//initialize the elements of list 4
    list4.Insert(1, 47);//different amount of numbers than list 1
    list4.Insert(2, 87);
    list4.Insert(3, 35);
    list4.Insert(4, 92);
    list4.Insert(5, 71);

    bool returnVal = false;//create a bool variable

    cout << "Is list1 equal to list2?: " << endl;//check if list1 = list2
    returnVal = equalList(list1, list2);
    boolTest(returnVal);

    cout << "Is list1 equal to list3?: " << endl;//check if list1 = list3
    returnVal = equalList(list1, list3);
    boolTest(returnVal);

    cout << "Is list1 equal to list4?: " << endl;//check if list1 = list4
    returnVal = equalList(list1, list4);
    boolTest(returnVal);

    cout << "Is list3 equal to list4?: " << endl;//check if list3 = list4
    returnVal = equalList(list3, list4);
    boolTest(returnVal);
}

bool equalList(List & a, List & b){//function that tests if 2 list objects are equal
    int valTrue = 0;

    if(a.Count() == b.Count()){//checks if both objects the same size

        for(int temp = 0; temp < a.Count(); ++temp) {
            if(a.Get(temp) == b.Get(temp)){//checks if each element is the same in both objects
                valTrue++;//for each set of elements that are the same add 1 to valTrue
            }
        }
        if(valTrue == a.Count()){//if valTrue equals the original list size return true
            return true;
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}

void boolTest(bool a) {//function to print true or false based on a bool value
    if (a == 1) {
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
}

/*

bool equalList(List &a, List &b)

    if both objects the same size

        loop for each element of list a
            if element x of list a is equal to element x of list b
                add 1 to valTrue

        if valTrue equals the size of list a
            return true
        else
            return false
    else
        return false

