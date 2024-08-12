/*
 * person.h
 *
 *  Created on: Aug 11, 2024
 *      Author: Andrew Arguello
 */

// HEADER FILE FOR PERSON

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

using namespace std;

class person {
	public:
		person(string name, string dob, string log, int age, string empNum);

		string getName();
		string getDOB();
		string getLog();
		int getAge();
		string getEmpNum();

		void setName(string input);
		void setDOB(string input);
		void setLog(string input);
		void setAge(int input);
		void setEmpNum(string input);
	private:
		string name_, dob_, log_, empNum_; // name, date of birth, notes
		int age_; // age, employee number

};



#endif /* PERSON_H_ */
