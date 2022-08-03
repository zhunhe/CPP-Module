/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 09:11:59 by juhur             #+#    #+#             */
/*   Updated: 2022/08/03 17:02:38 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP08_EX02_MUTANTSTACK_HPP_
#define CPP08_EX02_MUTANTSTACK_HPP_

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:
  // Default constructor
  MutantStack();
  // Copy constructor
  MutantStack(const MutantStack& obj);
  // Copy assignment operator
  MutantStack& operator=(const MutantStack& rhs);
  // Destructor
  ~MutantStack();

  typedef typename std::stack<T>::container_type::iterator iterator;
  typedef typename std::stack<T>::container_type::const_iterator const_iterator;

  iterator begin();
  const_iterator begin() const;
  iterator end();
  const_iterator end() const;
};

// Default constructor
template <typename T>
MutantStack<T>::MutantStack() {}

// Copy constructor
template <typename T>
MutantStack<T>::MutantStack(const MutantStack& obj) {
  *this = obj;
}

// Copy assignment operator
template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& rhs) {
  if (this != &rhs)
    *this = rhs;
  return *this;
}

// Destructor
template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
  return this->c.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const {
  return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
  return this->c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const {
  return this->c.end();
}

#endif
