#ifndef GRAAL_H
#define GRAAL_H

#include<iostream>
using std::cout;
using std::endl;
#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class InputIt, class UnaryPredicate>
bool all_of(InputIt first, InputIt last, UnaryPredicate p)
{
    // TODO
		cout<< "entrou na funcao"<<endl;

		bool values = true;
		int count = 0;
		for(InputIt i = first; i != last; i++){
			if(p(*i)==false){
				values = false;
				break;
			}
			count++;
		}

		if(count < 1){
			return false;
		}
		cout<<endl;
    return values;
}

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class InputIt, class UnaryPredicate>
bool any_of(InputIt first, InputIt last, UnaryPredicate p)
{
    // TODO
		bool values = false;
		for(InputIt i = first; i != last; i++){
			if(p(*i) == true){
				values = true;
				break;
			}
		}
    return values;
}

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class InputIt, class UnaryPredicate>
bool none_of(InputIt first, InputIt last, UnaryPredicate p)
{
    // TODO
    bool values = true;
		for(InputIt i = first; i != last; i++){
			if(p(*i) == true){
				values = false;
				break;
			}
		}
    return values;
}

}
#endif
