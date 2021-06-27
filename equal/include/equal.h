#ifndef GRAAL_H
#define GRAAL_H

#include <iostream>
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
 * @tparam InputIt1,InputIt2 iterators para os ranges.
 *
 * @param first1 Ponteiro para o primeiro elemento do range1
 * @param first2 Ponteiro para o primeiro elemento do range2
 * @param last1 Ponteiro para a posição logo após o último elemento do range1
 * @param last2 Ponteiro para a posição logo após o último elemento do range2

 * @param Equal Função de comparacao
 *
 * @return Verdadeiro se todos os elementos de ambos os ranges forem iguais.
 */
 */
template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, Equal eq)
{
    // TODO
		int count = 0;
		bool all = true;
		for(InputIt1 i = first1; i != last1; i++){
			InputIt2 k = first2 + count;
				if(eq(*i, *k) == false){
					all = false;
				}
			count++;
		}
    return all;
		// return false;
}

template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1,
           InputIt2 first2, InputIt2 last2,
           Equal eq )
{
    // TODO
		bool all = true;
		while(first1 != last1){
			if(eq(*first1, *first2)== false){
				all = false;
			}
			first1 = first1 + 1;
			first2 = first2 + 1;
		}
    return all;
		// return false;
}

}
#endif
