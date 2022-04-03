#include "utils.hpp"

bool	my_endswith(const std::string &str, const std::string &find)
{
	assert(!str.empty());
	assert(!find.empty());

	size_t find_size = find.size();
	assert(find_size < str.size());

	for (int i = str.size() - 1, j = find_size - 1; j >= 0; i--, j--)
	{
		// std::cout << "str: " << str[i] << " find[" << j << "]: " << find[j] << std::endl; 
		if (str[i] != find[j])
			return (false);
	}
	return (true);
}

// bool	is_file_empty(const std::fstream &file)
// {
	
// }

