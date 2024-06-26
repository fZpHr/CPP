/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:11:51 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/15 16:25:38 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat = Bureaucrat("Bob", 5);
        try
        {
            std::cout << bureaucrat << std::endl;
            std::cout << "setGrade at 100" << std::endl;
            bureaucrat.setGrade(100);
            std::cout << bureaucrat << std::endl;
            /* std::cout << "setGrade at 0 " << std::endl;
            bureaucrat.setGrade(0);
            std::cout << bureaucrat << std::endl; */ 
            std::cout << "setGrade 3: " << std::endl;
            bureaucrat.setGrade(3);
            std::cout << bureaucrat << std::endl;
            std::cout << "upGrade: ";
            bureaucrat.upGrade();
            std::cout << bureaucrat << std::endl;
            std::cout << "upGrade: ";
            bureaucrat.upGrade();
            std::cout << bureaucrat << std::endl;
/*             std::cout << "upGrade: ";
            bureaucrat.upGrade();
            std::cout << bureaucrat << std::endl; */
/* 		    std::cout << "setGrade at 150" << std::endl;
            bureaucrat.setGrade(150);
            std::cout << bureaucrat << std::endl; */
            std::cout << "downGrade: ";
            bureaucrat.downGrade();
		    std::cout << bureaucrat << std::endl;
            return (0);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
            return (1);
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return (1);
    }
}