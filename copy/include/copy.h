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
 */
template<class InputIt>
InputIt copy(InputIt first, InputIt last, InputIt d_first)
{
    // TODO
		InputIt j = d_first;
		InputIt end = d_first;
		int count = 0;
		for(InputIt i = first; i != last; i++){
			*j = *i;
			j++;
			count++;
		}
		end = d_first + count;
    return end;
}

}
#endif
