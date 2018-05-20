#include "academicformation.h"

Formation::Formation() {
    grade = "NON";
    gradeName = "NON";
    institution = "NON";
    idCard = "NON";
    }

///Formation::Formation(const Formation&){} ///CONSTRUCTOR COPIA

///Constructor Parametrizado
Formation::Formation(const std::string& n,std::string& i, std::string& g, Date& b,Date& f,Date& d,std::string& id) : grade(g), gradeName(n),institution(i),beginDate(b),finishDate(f),degreeDate(d),idCard(id) {}

std::string Formation::getGrade(){
    return grade;
}

std::string Formation::getGradeName() {
    return gradeName;
    }

std::string Formation::getInstitution() {
    return institution;
    }

Date Formation::getBeginDate() {
    return beginDate;
    }

Date Formation::getFinishDate() {
    return finishDate;
    }

Date Formation::getDegreeDate() {
    return degreeDate;
    }

std::string Formation::getIdCard() {
    return idCard;
    }

void Formation::setGrade(const std::string& g) {
    grade = g;
    }

void Formation::setGradeName(const std::string& n) {
    gradeName = n;
    }

void Formation::setInstitution(const std::string& i) {
    institution = i;
    }

void Formation::setBeginDate(const Date& b) {
    beginDate = b;
    }

void Formation::setFinishDate(const Date& f) {
    finishDate = f;
    }

void Formation::setDegreeDate(const Date& d) {
    degreeDate = d;
    }

void Formation::setIdCard(const std::string& id) {
    idCard = id;
    }

/*void Formation::toString()
{
}*/
