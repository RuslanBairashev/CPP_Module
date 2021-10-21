//https://stackoverflow.com/questions/525365/does-stdstack-expose-iterators
#include "mutantstack.hpp"
#include <list>

int main()
{
	MutantStack<int> mstack;
	
	std::cout << "MutantStack tests:" << std::endl;
	std::cout << "__________________" << std::endl;
	std::cout << std::boolalpha << "Stack empty?: "<< mstack.empty() << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "The element om the top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Stack size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(555);
	std::cout << "Stack empty?: "<< mstack.empty() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
	++it; }
	std::stack<int> new_mstack(mstack);
	std::cout << "The element om the top: " << new_mstack.top() << std::endl;
	std::cout << "Copy Stack size: " << new_mstack.size() << std::endl << std::endl;

	std::list<int> lst;
	std::cout << "List tests:" << std::endl;
	std::cout << "___________" << std::endl;
	lst.push_back(5);
	lst.push_back(17);
	std::cout << "The element on the top: " << lst.back() << std::endl;
	lst.pop_back();
	std::cout << "List size: " << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(555);
	std::list<int>::iterator itl = lst.begin();
	std::list<int>::iterator itel = lst.end();
	++itl;
	--itl;
	while (itl != itel) {
		std::cout << *itl << std::endl;
	++itl; }
	std::list<int> new_lst(lst);

	return 0;
}