#ifndef HTML_H
#define HTML_H

#include <iostream>
#include <fstream>
#include <string>
#include "utils.hpp"


using safe_string = const std::string &;
// class html_traits
// {

// };



class nav
{
	public:
		
		nav();
		~nav();

	private:

		bool		ativated;
		std::string	color;
		size_t		nbr_of_nav_links;
};

template <typename elem>
struct traits
{
	traits()
		: _element() {}

	private:
		elem _element;
};


class html
{
	public:

		html();
		html(safe_string html_file_name);
		html(const html &copy);
		html(safe_string html_file_name);
		~html();
		html	&operator=(const html &rhs);
		
		void	create_head();
		void	create_head(safe_string stylesheet_name);
		void	create_head(safe_string title, safe_string stylesheet_name);
		
		template <typename elem>
		void	create_elem();
	
	private:


		std::ofstream _file;

};





#endif
