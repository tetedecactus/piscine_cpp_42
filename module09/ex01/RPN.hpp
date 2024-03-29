/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:29:47 by olabrecq          #+#    #+#             */
/*   Updated: 2024/02/23 11:09:38 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <stack>
#include <string>
#include <stdexcept>
#include <cstring>
#include <cctype>
#include <sstream>
#include <limits>


class RPN
{
private:
    
    double _result;
    std::string _input;
    
    std::stack<double> _operands;
    
public:

    RPN(void);
    RPN(const char *equation);
    RPN(RPN const & src);
    RPN& operator=(RPN const & rhs);
    ~RPN();
    
    inline bool isDigit(char c);
    inline bool isOperator(char c);
    double parseDouble(const std::string& str);
    double calculateRPN(const std::string& input);
    bool checkInput(const std::string& input);
    bool parseInpute(const std::string&  inpute);
    
    void setOperands(std::stack<double> operands);
    void setResult(double result);
    void setInput(std::string input);

    double getResult() const;
    std::string getInput() const;
    std::stack<double> getOperands() const;
    bool isoperator(char c);

};

// https://en.wikipedia.org/wiki/Reverse_Polish_notation
// https://www.youtube.com/watch?v=qN8LPIcY6K4&t=304s
