/*=============================================================================
    Copyright (c) 2001-2009 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/
#include "statement-grammar.hpp"

// This is not really called. Its only purpose is to
// instantiate the constructor of the grammar.
void instantiate_statement()
{
	using namespace boost::spirit::qi;
    typedef std::string::const_iterator iterator_type;
    symbols<char, function_info> functions;
    std::vector<int> code;
    statement<iterator_type> g(code, functions);
}
