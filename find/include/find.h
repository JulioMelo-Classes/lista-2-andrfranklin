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
 * @tparam T ,valor para comparacao.
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param Equal Função de comparacao.
 *
 * @return iterator do elemento comparado se for igual ao valor T ou last se nenhum elemento for igual ao valor T.
 */
template<class InputIt, class T, class Equal>
InputIt find(InputIt first, InputIt last, const T& value, Equal eq)
{
    // TODO
		for(InputIt i = first; i != last; i++){
			if(eq(*i, value)){
				return i;
				break;
			}
		}
		return last;
}

}
#endif
