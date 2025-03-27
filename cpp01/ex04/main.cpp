/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:40:30 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/03/21 11:50:02 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

std::string	replace( std::string content,
		std::string const to_replace, std::string const replacer) {
	std::string	result = "";
	size_t		pos = 0;
	for (size_t i = 0; i < content.length(); i++) {
		pos = content.find(to_replace, i);
		if (pos != std::string::npos && pos == i) {
			result.append(replacer);
			i += to_replace.length() - 1;
		}
		else
			result += (content[i]);
	}
	return (result);
}

int	manage_files( std::string const filename,
		std::string const s1, std::string const s2 ) {
	if (s1.empty())
		return (-1);
	std::string			content = "";
	std::stringstream	buffer;
	std::ifstream		infile(filename.c_str());
	std::ofstream		outfile((filename + ".replace").c_str());
	if (infile.fail()) {
		std::cerr << filename + " doesn't exit or is read protected.\n";
		return (1);
	}
	if (!outfile.is_open() || outfile.fail()) {
		std::cerr << "Error while opening " << filename + ".replace\n";
		return (1);
	}
	buffer << infile.rdbuf();
	infile.close();
	content = buffer.str();
	outfile << replace(content, s1, s2);
	outfile.close();
	std::cout << "Success!\nOpen file " << filename;
	std::cout << ".replace to see the result." << std::endl;
	return (0);
}

int	main( int argc, char** argv ) {
	if (argc != 4) {
		std::cerr << "Error: 3 arguments needed." << std::endl;
		std::cerr << "Usage: ./sed filename \"string to find\" ";
		std::cerr << "\"string to replace\"" << std::endl;
		return (1);
	}
	if (manage_files(argv[1], argv[2], argv[3]) == -1) {
		std::cerr << "Error: Nothing to replace, ";
		std::cerr << "\"string to find\" is empty" << std::endl;
		std::cerr << "Usage: ./sed filename \"string to find\" ";
		std::cerr << "\"string to replace\"" << std::endl;
		return (1);
	}
	return (0);
}
