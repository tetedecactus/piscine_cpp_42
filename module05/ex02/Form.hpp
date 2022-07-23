/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:15:59 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/23 01:09:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const _name;
		bool _isSigned;
		unsigned int _gradeToSigned;
		unsigned int _gradeToExec;
	public:
		Form( void );
		Form( std::string formName, unsigned int gradeToSigned, unsigned int gradeToexec );
		Form( Form const & src );
		~Form( void );
		Form& operator=( Form const & rhs );
		
		void beSigned( Bureaucrat const & employe );

		void checkGrade( unsigned int gradeToSign, unsigned int gradeToExec ) const;

		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception 
		{
			virtual const char* what() const throw();
		};

		void setIsSigned( bool newIsSigned );
		void setGradeToSigned( unsigned int newtGradeToSigned );
		void setGradeToExec( unsigned int newtGradeToExec );
		
		std::string getName( void ) const;
		bool getIsSigned( void ) const;
		unsigned int getGradeToSigned( void ) const;
		unsigned int getGradeToExec( void ) const;
		
};
std::ostream & operator<<( std:: ostream & o, Form const & i);


