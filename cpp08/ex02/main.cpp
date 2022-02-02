#include "Mutantstack.hpp"
#include <list>

int main()
{
	std::cout << "Mutantstack<int>" << std::endl;
	{
		Mutantstack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		Mutantstack<int>::iterator it = mstack.begin();
		Mutantstack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << std::endl << "list<int>" << std::endl;
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
	std::cout << std::endl << "Mutantstack<string>" << std::endl;
	{
		Mutantstack<std::string> mstack;
		mstack.push("haha");
		mstack.push("lol");
		mstack.push("mdr");
		std::cout << mstack.size() << std::endl;
		Mutantstack<std::string>::iterator	it = mstack.begin();
		for (; it != mstack.end(); it++)
			std::cout << *it << std::endl;
		while(!mstack.empty())
			mstack.pop();
		std::cout << mstack.size() << std::endl;
	}
	std::cout << std::endl << "list<string>" << std::endl;
	{
		std::list<std::string> mstack;
		mstack.push_back("haha");
		mstack.push_back("lol");
		mstack.push_back("mdr");
		std::cout << mstack.size() << std::endl;
		std::list<std::string>::iterator	it = mstack.begin();
		for (; it != mstack.end(); it++)
			std::cout << *it << std::endl;
		while(!mstack.empty())
			mstack.pop_back();
		std::cout << mstack.size() << std::endl;

	}
	return 0;
}
