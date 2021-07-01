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
 * @tparam InputIt iterator para o range.
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param d_first Ponteiro para a primeria posição do primeiro elemento do segundo range
 *
 * @return Um InputIt para o ultimo elemento do segundo range
 */
 /*
 ok, não vou descondar a indentação, mas no trabalho nos vemos
 */
template<class InputIt>
InputIt copy(InputIt first, InputIt last, InputIt d_first)
{
    // TODO
		InputIt j = d_first;//indentação!!!!
		InputIt end = d_first;//indentação!!!!
		int count = 0;//indentação!!!!
		for(InputIt i = first; i != last; i++){//indentação!!!!
			*j = *i;
			j++;
			count++;
		}
		end = d_first + count;//indentação!!!!
    return end; //indentação!!!!
}

}
#endif
