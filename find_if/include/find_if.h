#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * TODO: documentação no estilo doxygen
 * @tparam InputIt ,iterator para o range.
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param UnaryPredicate Função de comparacao.
 *
 * @return iterator do elemento comparado se for igual ao predicado ou last se nenhum elemento for igual ao predicado.
 */
template<class InputIt, class UnaryPredicate>
InputIt find_if(InputIt first, InputIt last, UnaryPredicate p)
{
    // TODO
		for(InputIt i = first; i != last; i++){
			if(p(*i)){
				return i;
				break;
			}
		}
		return last;
}

}
#endif
