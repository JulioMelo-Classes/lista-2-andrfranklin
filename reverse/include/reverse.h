#ifndef GRAAL_H
#define GRAAL_H

#include <vector>
using namespace std;
#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * TODO: documentação no estilo doxygen
 * @tparam BidirIt iterator para o range.
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 *
 * @return O range com a ordem de seus elementos invertida.
 */
 /*
 blz
 */
template<class BidirIt>
void reverse(BidirIt first, BidirIt last){
    // TODO
    while ((first != last) && (first != --last)) { //talvez usar um rbegin ficasse mais claro
        iter_swap(first++, last);
    }
}

}
#endif
