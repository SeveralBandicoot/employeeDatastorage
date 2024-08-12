/*
 * person.cpp
 *
 *  Created on: Aug 11, 2024
 *      Author: Andrew Arguello
 */

// IMPLEMENTATION FILE FOR PERSON

#include "person.h"

person::person(string name, string dob, string log, int age, string empNum) {
	name_ = name;
	dob_ = dob;
	log_ = log;
	age_ = age;
	empNum_ = empNum;
}

string person::getName() {
	return name_;
}

string person::getDOB() {
	return dob_;
}
string person::getLog() {
	return log_;
}
int person::getAge() {
	return age_;
}
string person::getEmpNum() {
	return empNum_;
}

void person::setName(string input) {
	name_ = input;
}

void person::setDOB(string input) {
	dob_= input;
}

void person::setLog(string input) {
	dob_= input;
}

void person::setAge(int input) {
	dob_= input;
}

void person::setEmpNum(string input) {
	dob_= input;
}


