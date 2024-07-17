#ifndef AIVECTOR_HPP_
#define AIVECTOR_HPP_

#include <iostream>

namespace ai {
  
  template <
              class T,
              class Allocator = std::allocator<T>
            >
  class vector {
  public:
    typedef typename Allocator::size_type size_type ;

    // ********************
    // CANONICALS BEGINS  *
    // ********************
    vector() : _size(0) 
    {}



    size_type size() const
    {
      return (_size) ;
    }


  private:
    size_type   _size ;
  } ;


} // namespace ai

#endif // AIVECTOR_HPP
