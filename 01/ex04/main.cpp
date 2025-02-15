/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaic <rpaic@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:14:25 by rpaic             #+#    #+#             */
/*   Updated: 2025/01/23 20:02:42 by rpaic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::ifstream file(av[1]);
        std::string s1 = av[2];
        std::string s2 = av[3];
        
        if (!file.is_open()) 
        {
            std::cerr << "Error: Could not open file " << av[1] << std::endl;
            return 1;
        }
        std::stringstream buffer;
        buffer << file.rdbuf();
        std::string content = buffer.str();
        file.close();
        std::string result;
        size_t pos = 0, start_from = 0;
        while ((pos = content.find(s1, start_from)) != std::string::npos) 
        {
            result.append(content, start_from, pos - start_from);
            result.append(s2);
            start_from = pos + s1.length();
        }
        result.append(content, start_from, std::string::npos);

        std::string const newFilePath = std::string(av[1]) + ".replace";
        std::ofstream outFile(newFilePath.c_str());
        if (!outFile.is_open()) 
        {
            std::cerr << "Error: Could not write to file " << newFilePath << std::endl;
            return 1;
        }
        outFile << result;
        outFile.close();
        std::cout << "File " << av[1] << " has been successfully replaced" << std::endl;
        return 0;
    }
    std::cerr << "Error: Wrong number of arguments" << std::endl;
        return 1;
}