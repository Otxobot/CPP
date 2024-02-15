#include "Form.hpp"

Form::Form() : _name("Default"), _isSigned(0), _gts(), _gte() {
    std::cout << "DEFAULT form constructor called\n";
}

Form::Form(std::string name, int gts, int gte) : _name(name), _isSigned(0), _gts(gts), _gte(gte) {
    std::cout << "PARAMETER Form constructor called\n";
    if (gts < 1 || gte < 1)
		throw GradeTooHighException();
	else if (gts > 150 || gte > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& obj) : _name(obj._name), _isSigned(obj._isSigned), _gts(obj._gts), _gte(obj._gte) {
    std::cout << "COPY form constructor called\n";
    *this = obj;
}

Form& Form::operator=(const Form& rhs)
{
    if (this != &rhs)
    {
        this->_isSigned = rhs._isSigned;
    }
    return (*this);
}

Form::~Form()
{
    std::cout << "Form destructor called\n";
}

std::string Form::getName() const{
    return (this->_name);
}

bool Form::getIsSigned() const{
    return (this->_isSigned);
}

int Form::getGTS() const{
    return (this->_gts);
}

int Form::getGTE() const{
    return (this->_gte);
}

void Form::beSigned(const Bureaucrat& src)
{
    if (src.getGrade() > this->_gts)
		throw Form::GradeTooLowException();
	else
		this->_isSigned = true;
}

std::ostream & operator<<(std::ostream & o, Form const & src){
	o << "Form " << src.getName() << " is signed: " << src.getIsSigned() << ", grade to sign: " << src.getGTS() << ", grade to execute: " << src.getGTE() << std::endl;
	return o;
}