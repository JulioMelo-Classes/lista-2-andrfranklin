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
 * @tparam InputIt iterator para o range.
 * @tparam UnaryPredicate o tipo de uma função bool(const T &a)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param p A função de comparação que retorna true quando o primeiro parâmetro é menor do que o segundo
 *
 * @return all_of Um bool se todos os elementos do range são iguais ao predicado p

 * @return any_of Um bool se pelo menos 1 dos elementos do range são iguais ao predicado p

 * @return none_of Um bool se nenhum dos elementos do range são iguais ao predicado p
 */
template<class InputIt, class UnaryPredicate>
bool all_of(InputIt first, InputIt last, UnaryPredicate p)
{
    // TODO

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
