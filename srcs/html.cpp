#include "html.hpp"

html::html()
{
	_file.open("index.html", std::ofstream::out | std::ofstream::trunc);
	assert(_file.is_open());
}

html::html(const std::string &html_file_name)
{
	assert(my_endswith(html_file_name, ".html"));
	_file.open(html_file_name, std::ofstream::out | std::ofstream::trunc);
	assert(_file.is_open());
}

html::~html()
{
	_file.close();
}


void	html::create_head()
{
	_file << "<!DOCTYPE html>\n";
	_file << "<html lang=\"en\">\n";
	_file << "<head>\n";
	_file << "\t<meta charset=\"UTF-8\">\n";
	_file << "\t<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">\n";
	_file << "\t<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n";
	_file << "\t<title>Document</title>\n";
	_file << "</head>\n";
}

void	html::create_head(safe_string stylesheet_name)
{
	_file << "<!DOCTYPE html>\n";
	_file << "<html lang=\"en\">\n";
	_file << "<head>\n";
	_file << "\t<meta charset=\"UTF-8\">\n";
	_file << "\t<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">\n";
	_file << "\t<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n";
	_file << "\t<title>Document</title>\n";
	_file << "\t<link rel=\"stylesheet\" href=\"" << stylesheet_name << "\">\n";
	_file << "</head>\n";
}

void	html::create_head(safe_string title, safe_string stylesheet_name)
{
	_file << "<!DOCTYPE html>\n";
	_file << "<html lang=\"en\">\n";
	_file << "<head>\n";
	_file << "\t<meta charset=\"UTF-8\">\n";
	_file << "\t<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">\n";
	_file << "\t<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n";
	_file << "\t<title>" << title << "</title>\n";
	_file << "\t<link rel=\"stylesheet\" href=\"" << stylesheet_name << "\">\n";
	_file << "</head>\n";

}
