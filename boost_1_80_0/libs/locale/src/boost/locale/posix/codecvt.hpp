//
// Copyright (c) 2009-2011 Artyom Beilis (Tonkikh)
//
// Distributed under the Boost Software License, Version 1.0.
// https://www.boost.org/LICENSE_1_0.txt

#ifndef BOOST_LOCALE_IMPL_POSIX_CODECVT_HPP
#define BOOST_LOCALE_IMPL_POSIX_CODECVT_HPP
#include <boost/locale/config.hpp>
#include <boost/locale/util.hpp>

#include <memory>
#include <string>

namespace boost {
namespace locale {
namespace impl_posix {
    BOOST_LOCALE_DECL
    util::base_converter *create_iconv_converter(std::string const &encoding);

} // impl_posix
} // locale
} // boost

#endif

